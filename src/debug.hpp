#pragma once

#include <string>

#if LOGLEVEL > 0
#include <iostream>
#endif

template<typename... Args>
void debug(const std::string& msg, Args... args) {
#if LOGLEVEL > 2
    std::printf(msg, args...);
#endif
}

template<typename... Args>
void log(const std::string& msg, Args... args) {
#if LOGLEVEL > 1
    std::printf(msg, args...);
#endif
}

template<typename... Args>
void warn(const std::string& msg, Args... args) {
#if LOGLEVEL > 0
    std::printf(msg, args...);
#endif
}
