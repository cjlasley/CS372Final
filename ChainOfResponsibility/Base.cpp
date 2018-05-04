#include "Base.h"


COR::Base::Base(void)
{
	referenceCount = 1;
	className = "Base";
	objectName = "";
}


COR::Base::Base(std::string objectName)
{
	referenceCount = 1;
	className = "Base";
	objectName = objectName;
}


void COR::Base::retain(void)
{
	referenceCount++;
}


void COR::Base::release(void)
{
	referenceCount--;
	if (referenceCount == 0)
	{
		delete this;
	}
}


std::string COR::Base::message(std::string identifier)
{
	for (int i = 0; i < 12; i++)
	{
		
	}
	return "";
}


bool COR::Base::doesRespondToMessage(std::string identifier)
{
	for (int i = 0; i < availableResponders.size(); i++)
	{
		if (identifier.compare(availableResponders[i]))
			return true;
	}
	return false;
}


std::string COR::Base::didNotRespondToMessage(std::string identifier, std::vector<std::string> arguments)
{
	return "";
}


void COR::Base::forwardMessage()
{
	
}


std::string COR::Base::message(std::string identifier, ...)
{
	return "";
}

COR::Base::~Base(void)
{

}


