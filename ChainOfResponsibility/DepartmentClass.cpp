
#include "DepartmentClass.h"

COR::Base* COR::Department::catchallHandler = NULL;

COR::Department::Department(void)
{
	responsibilityChainMembers = std::vector<std::string>();
	this->registerCatchall(NULL);
}


void COR::Department::registerType(std::string type)
{
	responsibilityChainMembers.push_back(type);
}


void COR::Department::registerCatchall(COR::Base *theHandler)
{
	catchallHandler = theHandler;
	if (!theHandler)
		return;
	catchallHandler->retain();
}


std::string COR::Department::nextTypeInChain(std::string thisType)
{
	for (int i = responsibilityChainMembers.size()-1; i > 0; i--) {
		if (thisType == responsibilityChainMembers[i] && i != 1) {
			return responsibilityChainMembers[i-1];
		}
	}

	return ""; /*If we are at the end of the handler chain*/
}


COR::Department::~Department(void)
{
	if (catchallHandler != NULL)
		catchallHandler->release();
}


