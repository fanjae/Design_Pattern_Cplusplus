#include "Singleton.h"
#include <iostream>
Singleton* Singleton::Inst = nullptr;

Singleton* Singleton::GetInst()
{
	if (Inst == nullptr)
	{
		Inst = new Singleton;
	}
	return Inst;
}

void Singleton::DestoryInst()
{
	if (Inst == nullptr)
	{
		return;
	}
	delete Inst;
	Inst = nullptr;
}

void Singleton::ShowMessage()
{
	std::cout << "Hello Singleton\n";
}