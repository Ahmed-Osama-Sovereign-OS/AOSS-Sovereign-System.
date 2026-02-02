#ifndef ANTI_DEBUG_H
#define ANTI_DEBUG_H
#include <sys/ptrace.h>
class AntiDebug {
public:
    static void Check() { if(ptrace(PTRACE_TRACEME,0,1,0)<0) _exit(1); }
};
#endif
