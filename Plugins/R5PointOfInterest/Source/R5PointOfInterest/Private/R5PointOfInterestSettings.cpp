#include "R5PointOfInterestSettings.h"

UR5PointOfInterestSettings::UR5PointOfInterestSettings() {
    this->AllowedActors.AddDefaulted(10);
    this->AllowedActorsWithTemplate.AddDefaulted(9);
    this->AllowedComponents.AddDefaulted(15);
    this->BlockingVolumeCollisionProfiles.AddDefaulted(2);
    this->POISpawnerName = TEXT("Common");
}

TArray<FName> UR5PointOfInterestSettings::GetAccessibleSpawnerNames() const {
    return TArray<FName>();
}


