#include "EnvQueryGenerator_Mercuna_Sphere.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryItemType_Point -FallbackName=EnvQueryItemType_Point
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UEnvQueryGenerator_Mercuna_Sphere::UEnvQueryGenerator_Mercuna_Sphere() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->Distribution = EMercunaPointDistribution::Uniform;
    this->Center = UEnvQueryContext_Querier::StaticClass();
}


