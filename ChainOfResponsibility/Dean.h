#ifndef __DEAN_H__
#define __DEAN_H__

#include <string>

#include "Base.h"
#include "DepartmentClass.h"

namespace COR{
	class Dean : public COR::Base
	{
	public:
		Dean(void);
		Dean(std::string identifier);

		virtual std::string message(std::string identifier);

		virtual std::string didNotRespondToMessage(std::string identifier);
		virtual void forwardMessage();

		virtual ~Dean(void);
	};
}


#endif // __DEAN_H__
