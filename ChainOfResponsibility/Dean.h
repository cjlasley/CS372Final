#ifndef __DEAN_H__
#define __DEAN_H__

#include "Base.h"
#include "DepartmentClass.h"

namespace COR{
	class Dean : public COR::Base, public COR::Department
	{
	public:
		Dean(void);
	public:
		virtual ~Dean(void);
	};
}


#endif // __DEAN_H__
