#pragma once
#include <iostream>
#include "Exeption.h"

class Zero : public Exeption
{
public:
	virtual void Error() 
	{
		std::cout << "������: ������� �� 0 ���������" << std::endl;
	}
};

