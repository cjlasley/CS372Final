#ifndef __BASE_H_DEFINED__
#define __BASE_H_DEFINED__

#include <vector>
#include <utility>

namespace COR{
	class Base
	{
	public:
		Base(void);
		Base(std::string objectName);

		void retain(void);
		void release(void);

		virtual std::string message(std::string identifier);
		virtual std::string message(std::string identifier, ...);
		bool doesRespondToMessage(std::string identifier);

		virtual ~Base(void);

	protected:
		virtual void didNotRespondToMessage(std::string identifier, std::vector<std::string> arguments);
		virtual void forwardMessage();

		std::vector<std::string> availableResponders;
		std::string className;
		std::string objectName;

	private:
		unsigned int referenceCount;
	};
}

#endif //__BASE_H_DEFINED__
