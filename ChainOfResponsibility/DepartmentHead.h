
#ifndef __DEPT_HEAD_H__
#define __DEPT_HEAD_H__

#include <string>

#include "Base.h"
#include "DepartmentClass.h"

namespace COR{
	class DepartmentHead : public COR::Base
	{
	public:
		DepartmentHead(void);
		DepartmentHead(std::string identifier);

		virtual std::string message(std::string identifier);

		virtual std::string didNotRespondToMessage(std::string identifier);
		virtual void forwardMessage();

		virtual ~DepartmentHead(void);
	};
}


#endif // __DEPT_HEAD_H__
