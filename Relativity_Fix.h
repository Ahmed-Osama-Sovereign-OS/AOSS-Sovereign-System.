#ifndef RELATIVITY_H
#define RELATIVITY_H
class Relativity {
public:
    static double TimeDilation(double velocity) {
        // تصحيح تأخير الوقت للساعة الذرية داخل النظام مقارنة بالأقمار
        double c = 299792458.0;
        return 1.0 / sqrt(1.0 - (velocity * velocity) / (c * c));
    }
};
#endif
