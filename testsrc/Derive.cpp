#include "Derive.h"


CDerive::CDerive(const char* msg):CBase(msg)
{
	std::cout << "CDerive 생성자 호출" << std::endl;
	std::cout << "CDerive Insert Data" << std::endl;
}


CDerive::~CDerive(void)
{
	std::cout << "CDerive 소멸자 호출" << std::endl;
	std::cout << "~CDerive Insert Data" << std::endl;
}

