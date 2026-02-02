#ifndef GHOST_H
#define GHOST_H
#include <sys/prctl.h>
class Ghost {
public:
    static void Hide() { prctl(PR_SET_NAME, "kworker/0:1", 0,0,0); }
};
#endif
