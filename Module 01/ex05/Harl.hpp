#ifndef HARL_CPP
#define HARL_CPP

#include <iostream>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		void complain(std::string level);
			 Harl(void);
			 ~Harl(void);
};

typedef		void	(Harl::*function_ptr) (void);

#endif