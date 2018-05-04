#ifndef __BASE_H_DEFINED__
#define __BASE_H_DEFINED__

#include <vector>
#include <utility>

namespace COR{
	class Base
	{
	public:
		Base(void);

		void retain(void);
		void release(void);

		std::string message(std::string identifier);
		std::string message(std::string identifier, ...);
		bool doesRespondToMessage(std::string identifier);

		virtual ~Base(void);

	protected:
		void didNotRespondToMessage(std::identifier, std::vector<std::string args>);
		void forwardMessage();

		std::vector<std::string> availableResponders;
		std::string className;
		std::string objectName;

	private:
		unsigned int referenceCount;
	};
}

#endif //__BASE_H_DEFINED__
