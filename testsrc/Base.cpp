#include "Base.h"


CBase::CBase(const char* msg)
{
	std::cout << "Base ������ ȣ��" << std::endl;
	Calling(msg);
}


CBase::~CBase(void)
{
	std::cout << "Base �Ҹ��� ȣ��" << std::endl;
}

void CBase::Calling(const char* msg)
{
	std::cout << msg << std::endl;
}
