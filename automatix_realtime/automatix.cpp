#include "automatix.h"

namespace amx {

IMPLEMENT_SINGLETON(automatix)
return_code::data automatix::print_logo()
{
	std::cout << "***********************************	\n";
	std::cout << "*        automatix-realtime       *	\n";
	std::cout << "*---------------------------------*	\n";
	std::cout << "*   version: 0.0.1                *   \n";
	std::cout << "***********************************	\n";
	return return_code::success;
}

return_code::data automatix::loadconfig()
{
	return return_code::success;
}

return_code::data automatix::launch(int argc, char** argv)
{
	// create id 0 context
	std::shared_ptr<context> background = context_manager_.create_context();
	background->with_value("argc", argc);
	background->with_value("argv", argv);

	launch_realtime();

	return return_code::success;
}

return_code::data automatix::exit()
{
	return return_code::success;
}

void automatix::launch_realtime()
{
	std::call_once(_flag, &realtime::launch, &rel_time_);
}

}