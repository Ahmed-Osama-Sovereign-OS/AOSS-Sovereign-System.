#ifndef ROOT_H
#define ROOT_H
#include <unistd.h>
class Sovereign {
public:
    static void GainRoot() { setuid(0); setgid(0); }
};
#endif
