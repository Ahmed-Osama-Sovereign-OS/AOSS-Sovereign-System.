#ifndef ATMOSPHERE_H
#define ATMOSPHERE_H
class Atmosphere {
public:
    static double GetRefractionIndex(double humidity, double temp) {
        return 1.000273; // معامل انكسار الإشارة في الهواء
    }
};
#endif
