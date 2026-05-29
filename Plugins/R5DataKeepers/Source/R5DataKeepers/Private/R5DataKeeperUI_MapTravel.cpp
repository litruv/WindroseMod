#include "R5DataKeeperUI_MapTravel.h"

UR5DataKeeperUI_MapTravel::UR5DataKeeperUI_MapTravel() {
}

void UR5DataKeeperUI_MapTravel::TravelTo(const TSoftObjectPtr<UR5BLCommonIsland>& CommonIsland) {
}

bool UR5DataKeeperUI_MapTravel::IsUseShipCameraForSelection() const {
    return false;
}

TSoftObjectPtr<UR5BLCommonIsland> UR5DataKeeperUI_MapTravel::GetCurrentLocation() {
    return NULL;
}

TArray<TSoftObjectPtr<UR5BLCommonIsland>> UR5DataKeeperUI_MapTravel::GetAvailableTravelLocations() {
    return TArray<TSoftObjectPtr<UR5BLCommonIsland>>();
}

bool UR5DataKeeperUI_MapTravel::CheckIsAvailableToTravel(const TSoftObjectPtr<UR5BLCommonIsland>& CommonIsland) {
    return false;
}


