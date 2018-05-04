#ifndef __DEPT_CLASS_H_DEFINED__
#define __DEPT_CLASS_H_DEFINED__

#include <vector>
#include <string>
#include <utility>

#include "Base.h"

namespace COR{
	class Department
	{
	public:
		Department(void);

		static void registerType(std::string type);
		static void registerObject(COR::Base* theObject);
		static void registerCatchall(COR::Base *theHandler);
		static std::string nextTypeInChain(std::string thisType);
		static COR::Base* nextHandlerForMessage(const std::string &theMessage, const std::string &senderType);

		virtual ~Department(void);

	protected:
		static std::vector<std::string> responsibilityChainMembers;
		static std::vector<COR::Base*>  chainObjects;
		static COR::Base *catchallHandler;
	};
}

#endif //__DEPT_CLASS_H_DEFINED__
