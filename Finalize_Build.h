#ifndef FINALIZE_H
#define FINALIZE_H
#include <iostream>
class Finalizer {
public:
    static void Complete() {
        std::cout << "\033[1;32m[SUCCESS] AOSS BEAST FULLY ARMED.\033[0m\n";
    }
};
#endif
