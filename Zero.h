#pragma once
#include <iostream>
#include "Exeption.h"

class Zero : public Exeption
{
public:
	virtual void Error() 
	{
		std::cout << "Ошибка: Деление на 0 запрещено" << std::endl;
	}
};

