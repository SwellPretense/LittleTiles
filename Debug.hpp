#ifndef DEBUG_HPP
#define DEBUG_HPP

#include "Source.hpp"

class Debug {
public:
	class Log {
	public:
		static void Notify(const char* msg) // 0
		{
			std::cout << Colors::cBLUE << "-[LOG]- " << Colors::cRESET << msg << "\n";
		}
		static void Warn(const char* msg)   // 1
		{
			std::cout << Colors::cYELLOW << "-[WARNING]- " << Colors::cRESET << msg << "\n";
		} 
		static void Alert(const char* msg) // 2
		{
			std::cout << Colors::cRED << "-[ERROR]- " << Colors::cRESET << msg << "\n";
		}
	};
};

#endif // DEBUG_HPP