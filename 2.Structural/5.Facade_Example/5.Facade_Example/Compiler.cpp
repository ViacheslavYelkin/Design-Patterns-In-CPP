#include "Compiler.h"

#include "CodeGenerator.h"
#include "Parser.h"
#include "Scanner.h"

void Compiler::compile() {
	Scanner sc{};
	sc.scan();

	Parser pr{};
	pr.parse();

	CodeGenerator cg{};
	cg.generateCode();
}
