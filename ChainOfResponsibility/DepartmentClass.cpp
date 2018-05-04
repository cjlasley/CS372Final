
#include "DepartmentClass.h"

COR::Base* COR::Department::catchallHandler = NULL;
std::vector<COR::Base*> COR::Department::chainObjects = std::vector<COR::Base*>();
std::vector<std::string> COR::Department::responsibilityChainMembers = std::vector<std::string>();

COR::Department::Department(void)
{
	responsibilityChainMembers = std::vector<std::string>();
	this->registerCatchall(NULL);
}


void COR::Department::registerType(std::string type)
{
	responsibilityChainMembers.push_back(type);
}


void COR::Department::registerObject(COR::Base* theObject)
{
	theObject->retain();
	chainObjects.push_back(theObject);
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


COR::Base* COR::Department::nextHandlerForMessage(const std::string &theMessage, const std::string &senderType)
{
	std::string desiredType = Department::nextTypeInChain(senderType);
	
	for (int i = chainObjects.size()-1; i > 0; i--) {
		if (chainObjects.at(i)->className == desiredType) {
			return chainObjects.at(i);
		}
	}

	return NULL;
}


COR::Department::~Department(void)
{
	if (catchallHandler != NULL)
		catchallHandler->release();
}


