#pragma once


class Square {
public:
	explicit Square(const int side) : side_{side} {}

	int getSide() const { return side_; }
	void setSide(int value) { side_ = value; }

private:
	int side_{};
};