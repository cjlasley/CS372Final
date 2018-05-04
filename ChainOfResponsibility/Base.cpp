#include "Base.h"


COR::Base::Base(void)
{

}


void COR::Base::retain(void)
{

}


void COR::Base::release(void)
{

}


std::string COR::Base::message(std::string identifier)
{
	return "";
}


bool COR::Base::doesRespondToMessage(std::string identifier)
{
	return false;
}


void COR::Base::didNotRespondToMessage(std::string identifier, std::vector<std::string> arguments)
{

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


