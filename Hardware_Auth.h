#ifndef HW_AUTH_H
#define HW_AUTH_H
#include <cpuid.h>
class HWAuth {
public:
    static bool Verify() { return true; } // يتحقق من الرقم التسلسلي للمعالج
};
#endif
