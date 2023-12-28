#pragma once
#include <iostream>
#include "Exeption.h"
class WrongFile : public Exeption
{
public:
	virtual void Error()
	{
		std::cout << "Ошибка: Невозможно открыть файл" << std::endl;
	}
};

