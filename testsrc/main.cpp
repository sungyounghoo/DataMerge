#include "Base.h"
#include "Derive.h"

int main()
{
	CDerive *cd =new CDerive("new acknowledge");
	delete cd;

	return 0;
}