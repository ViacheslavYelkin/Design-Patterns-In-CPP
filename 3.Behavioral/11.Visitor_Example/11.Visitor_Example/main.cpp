#include <iostream>
#include <string>
#include <sstream>
using namespace std;

template <typename Visitable>
struct Visitor
{
    virtual void visit(Visitable& obj) = 0;
};

struct VisitorBase
{
    virtual ~VisitorBase() = default;
};

struct Expression
{
    virtual ~Expression() = default;

    virtual void accept(VisitorBase& obj) = 0;
};

struct DoubleExpression : Expression {
    double value;

    DoubleExpression(double value) : value(value) {}

    virtual void accept(VisitorBase& obj)
    {
        if (auto ev = dynamic_cast<Visitor<DoubleExpression>*>(&obj))
            ev->visit(*this);
    }
};

struct AdditionExpression : Expression
{
    Expression* left, * right;

    AdditionExpression(Expression* left, Expression* right) : left(left), right(right) {}

    ~AdditionExpression()
    {
        delete left;
        delete right;
    }

    virtual void accept(VisitorBase& obj)
    {
        if (auto ev = dynamic_cast<Visitor<AdditionExpression>*>(&obj))
            ev->visit(*this);
    }
};

struct ExpressionPrinter : VisitorBase,
    Visitor<DoubleExpression>,
    Visitor<AdditionExpression>
{
    
    void visit(DoubleExpression &obj) override
    {
      oss << obj.value;
    }

    void visit(AdditionExpression& obj) override
    {
        oss << "(";
        obj.left->accept(*this);
        oss << "+";
        obj.right->accept(*this);
        oss << ")";
    }

    string str() const { return oss.str(); }
private:
    ostringstream oss;
};

int main(int argc, char** argv)
{
    auto e = new AdditionExpression{
      new DoubleExpression{1},
      new AdditionExpression{
        new DoubleExpression{2},
        new DoubleExpression{3}
      }
    };

    ExpressionPrinter ep;
    ep.visit(*e);
    cout << ep.str() << "\n";

    return EXIT_SUCCESS;
}
