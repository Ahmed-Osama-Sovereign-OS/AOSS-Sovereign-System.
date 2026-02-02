#ifndef HW_LOCKDOWN_H
#define HW_LOCKDOWN_H
class HWLock {
public:
    static void FreezeIOPorts() {
        // غلق كافة منافذ USB والبيانات عند استشعار محاولة اختراق فيزيائي
    }
};
#endif
