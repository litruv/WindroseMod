#include "R5EnvQueryGenerator_ProjectedPoints.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryItemType_Point -FallbackName=EnvQueryItemType_Point
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UR5EnvQueryGenerator_ProjectedPoints::UR5EnvQueryGenerator_ProjectedPoints() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
}


