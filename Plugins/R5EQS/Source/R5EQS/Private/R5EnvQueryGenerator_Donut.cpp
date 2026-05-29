#include "R5EnvQueryGenerator_Donut.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UR5EnvQueryGenerator_Donut::UR5EnvQueryGenerator_Donut() {
    this->bUseSpiralPattern = false;
    this->Center = UEnvQueryContext_Querier::StaticClass();
    this->bDefineArc = false;
}


