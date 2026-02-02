#ifndef VISUAL_H
#define VISUAL_H
#include <iostream>
class VisualUI {
public:
    static void Init() { std::cout << "\033[1;34m[AOSS BEAST ONLINE]\033[0m\n"; }
    static void Update() { std::cout << "\r[COMMANDER: AHMED OSAMA] [STATUS: SECURE]" << std::flush; }
};
#endif
