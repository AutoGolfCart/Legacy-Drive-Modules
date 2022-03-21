// --------- Standard Module Components
#include "can_adapter.h"
#include "id_light.h"

public:
    void standardModuleSetup(int CAN_CS_PIN = Default_CAN_CS);
    void standardModuleLoopHead();
    void standardModuleLoopTail();