#include "R5NetCm_ServerDescription_Transient.h"

FR5NetCm_ServerDescription_Transient::FR5NetCm_ServerDescription_Transient() {
    this->Hosting = ER5NetCm_HostingType::None;
    this->CurrentPlayerCount = 0;
    this->UseForceP2pConnection = false;
}

