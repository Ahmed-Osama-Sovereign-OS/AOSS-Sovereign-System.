#include "AOSS_Kernel.h"
#include "Visual_Interface.h"
#include "Sovereign_Root.h"
#include "Hardware_Auth.h"
#include "Satellite_Core.h"
#include "Quantum_Shield.h"
#include "Physics_Engine.h"
#include "Cyber_Warfare.h"
#include "Self_Destruct.h"
#include "Anti_Debugger.h"
#include "Ghost_Process.h"
#include "Network_Stealth.h"
#include "Biometric_Auth.h"
#include "System_Pulse.h"
#include "Finalize.h"

int main(int argc, char* argv[]) {
    Sovereign::GainRoot(); // ملف 3
    AntiDebug::Check();    // ملف 10
    Ghost::Hide();         // ملف 11
    
    if(!HWAuth::Verify() || !BioAuth::Verify()) {
        Purge::Execute(argv[0]); // ملف 9
        return 1;
    }

    VisualUI::Init(); // ملف 2
    SystemPulse::Start(); // ملف 14
    
    // تشغيل محرك الأقمار والفيزياء
    Satellite::Connect(); // ملف 5
    Physics::Run();       // ملف 7

    while(true) {
        Quantum::Rotate(); // ملف 6
        CyberWar::Protect(); // ملف 8
        VisualUI::Update();
    }
    return 0;
}
