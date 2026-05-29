#include "EnvQueryGenerator_Mercuna_2DRandom.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryItemType_Point -FallbackName=EnvQueryItemType_Point
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UEnvQueryGenerator_Mercuna_2DRandom::UEnvQueryGenerator_Mercuna_2DRandom() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->Centre = UEnvQueryContext_Querier::StaticClass();
}


