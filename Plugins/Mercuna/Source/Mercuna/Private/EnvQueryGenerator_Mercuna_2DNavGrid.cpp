#include "EnvQueryGenerator_Mercuna_2DNavGrid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryItemType_Point -FallbackName=EnvQueryItemType_Point
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UEnvQueryGenerator_Mercuna_2DNavGrid::UEnvQueryGenerator_Mercuna_2DNavGrid() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->Centre = UEnvQueryContext_Querier::StaticClass();
}


