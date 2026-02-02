#ifndef PURGE_H
#define PURGE_H
#include <unistd.h>
class Purge {
public:
    static void Execute(char* path) { unlink(path); _exit(0); }
};
#endif
