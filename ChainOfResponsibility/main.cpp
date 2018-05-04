#include <iostream>

#include "Base.h"
#include "DepartmentClass.h"
#include "Dean.h"

int main(void)
{
	std::cout << "Shello, welcome to the UAF CS Department!\n" << std::endl;

	COR::Department *csDepartment = new COR::Department();
	COR::Dean *theDean = new COR::Dean("CSDean");
	csDepartment->registerType("Dean");
	csDepartment->registerObject(theDean);

	std::string aString = theDean->message("Look scary");

	std::cout << aString << std::endl;

	getchar();
	return 0;
}
