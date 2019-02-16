#include "Base.h"


CBase::CBase(const char* msg)
{
	std::cout << "Base 생성자 호출" << std::endl;
	Calling(msg);
}


CBase::~CBase(void)
{
	std::cout << "Base 소멸자 호출" << std::endl;
}

void CBase::Calling(const char* msg)
{
	std::cout << msg << std::endl;
}
