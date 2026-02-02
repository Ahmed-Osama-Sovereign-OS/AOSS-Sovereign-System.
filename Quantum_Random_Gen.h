#ifndef Q_RANDOM_H
#define Q_RANDOM_H
#include <random>
class QRandom {
public:
    static int GetEntropy() {
        return rand(); // في النظام الحقيقي يتم سحبه من ضوضاء العتاد
    }
};
#endif
