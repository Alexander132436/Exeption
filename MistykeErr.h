#pragma once
#include <iostream>
#include "Exeption.h"
class MistykeErr : public Exeption
{
public:
	virtual void Error()
	{
		std::cout << "������: ����� �� ������� �������" << std::endl;
	}
};

