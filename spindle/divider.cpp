#include <iostream>
#include "uistyle.h"


DividerStyle::DividerStyle(char left_end = char(179), char middle = char(196), char right_end = char(179)) : left_end(left_end), middle(middle), right_end(right_end)
{
}

Divider::Divider(int width, DividerStyle style) : _width(width), _style(style)
{
}

Divider::~Divider()
{
}

void Divider::print()
{
	std::cout << _style.left_end;
	for (int i = 1; i < _width - 1; i++)
	{
		std::cout << _style.middle;
	}
	std::cout << _style.right_end << std::endl;
}

void Divider::print(std::string title)
{
	std::cout << _style.left_end;
	std::cout << _style.middle;
	std::cout << ' ';
	std::cout << title;
	std::cout << ' ';
	for (int i = title.length() + 4; i < _width - 1; i++)
	{
		std::cout << _style.middle;
	}
	std::cout << _style.right_end << std::endl;
}

