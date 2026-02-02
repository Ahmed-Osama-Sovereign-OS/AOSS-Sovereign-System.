#ifndef GRAVITY_CORE_H
#define GRAVITY_CORE_H
class Gravity {
public:
    static double GetLocalG(double lat, double alt) {
        // حساب الجاذبية بدقة بناءً على الارتفاع لتعديل نبض المعالج
        return 9.780327 * (1 + 0.0053024 * sin(lat)*sin(lat)) - 0.000003086 * alt;
    }
};
#endif
