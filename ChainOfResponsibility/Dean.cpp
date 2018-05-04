
#include <vector>
#include <iostream>

#include "Dean.h"


COR::Dean::Dean(void)
{
	availableResponders = std::vector<std::string>();
	availableResponders.push_back("Fire professor");
	availableResponders.push_back("Look scary");
	availableResponders.push_back("Not visit the CS Department");

	this->className = "Dean";
}

COR::Dean::Dean(std::string identifier)
{
	availableResponders = std::vector<std::string>();
	availableResponders.push_back("Fire professor");
	availableResponders.push_back("Look scary");
	availableResponders.push_back("Not visit the CS Department");

	this->className = "Dean";
	this->objectName = identifier;
}

std::string COR::Dean::message(std::string identifier)
{
	/*For this simple demonstration, I am using a simple if statement
	to generate the correct output. In an actual project, a better option would
	be to store the supported functions as a std::map whose values are function
	pointers that would be called when the identifier is passed in.*/
	if (identifier == "Fire professor") {
		return "Yikes! A professor just got fired!";

	}else if (identifier == "Look scary") {
		return "Anybody who passes by the Dean's now-open office door now turns into a pillar of salt.";
	} 
	else if (identifier == "Not visit the CS Department") {
		return "As you walk through the CS Department office, you do not see the Dean.";
	}else{
		return this->didNotRespondToMessage(identifier);
	}
}


std::string COR::Dean::didNotRespondToMessage(std::string identifier)
{
	std::cout << "Dean did not respond to this message! Searching for another handler..." << std::endl;
	return (COR::Department::nextHandlerForMessage(identifier, this->className)->message(identifier));

}


void COR::Dean::forwardMessage()
{

}


COR::Dean::~Dean(void)
{
	
}
