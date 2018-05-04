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

		void registerType(std::string type);
		void registerCatchall(COR::Base *theHandler);
		std::string nextTypeInChain(std::string thisType);

		virtual ~Department(void);

	protected:
		std::vector<std::string> responsibilityChainMembers;
		static COR::Base *catchallHandler;
	};
}

#endif //__DEPT_CLASS_H_DEFINED__
