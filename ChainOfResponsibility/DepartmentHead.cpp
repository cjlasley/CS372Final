
#include <vector>
#include <iostream>

#include "DepartmentHead.h"


COR::DepartmentHead::DepartmentHead(void)
{
	availableResponders = std::vector<std::string>();
	availableResponders.push_back("Waive prerequisites");

	this->className = "DepartmentHead";
}

COR::DepartmentHead::DepartmentHead(std::string identifier)
{
	availableResponders = std::vector<std::string>();
	availableResponders.push_back("Waive prerequisites");

	this->className = "DepartmentHead";
	this->objectName = identifier;
}

std::string COR::DepartmentHead::message(std::string identifier)
{
	/*For this simple demonstration, I am using a simple if statement
	to generate the correct output. In an actual project, a better option would
	be to store the supported functions as a std::map whose values are function
	pointers that would be called when the identifier is passed in.*/
	if (identifier == "Waive prerequisites") {
		return "An under-qualified student is now in a class that he shouldn't be.";
	}else{
		return this->didNotRespondToMessage(identifier);
	}
}


std::string COR::DepartmentHead::didNotRespondToMessage(std::string identifier)
{
	std::cout << "The Department Head did not respond to this message! Searching for another handler..." << std::endl;
	COR::Department::nextHandlerForMessage(identifier, this->className);

	return "";

}


void COR::DepartmentHead::forwardMessage()
{

}


COR::DepartmentHead::~DepartmentHead(void)
{
	
}
