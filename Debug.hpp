#ifndef DEBUG_HPP
#define DEBUG_HPP

#include "Source.hpp"

class Debug {
public:
	class Log {
	public:
		static void Notify(const char* msg) // 0
		{
			std::cout << Colors::BLUE << "-[LOG]- " << Colors::RESET << msg << "\n";
		}
		static void Warn(const char* msg)   // 1
		{
			std::cout << Colors::YELLOW << "-[WARNING]- " << Colors::RESET << msg << "\n";
		} 
		static void Alert(const char* msg) // 2
		{
			std::cout << Colors::RED << "-[ERROR]- " << Colors::RESET << msg << "\n";
		}
	};
};

#endif // DEBUG_HPP