#ifndef COLORS_HPP
#define COLORS_HPP

#include "Source.hpp"

class Colors {
public:
    static constexpr const char* cRED = "\033[31m";
    static constexpr const char* cGREEN = "\033[32m";
    static constexpr const char* cYELLOW = "\033[33m";
    static constexpr const char* cBLUE = "\033[34m";
    static constexpr const char* cMAGENTA = "\033[35m";
    static constexpr const char* cCYAN = "\033[36m";
    static constexpr const char* cRESET = "\033[0m";

	static constexpr const SDL_Color sBLACK = { 0, 0,   0, 255 };
    static constexpr const SDL_Color sGREEN = { 0, 255, 0, 255 };
};

#endif // COLORS_HPP