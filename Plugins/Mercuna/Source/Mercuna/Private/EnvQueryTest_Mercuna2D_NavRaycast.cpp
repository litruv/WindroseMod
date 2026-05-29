#include "EnvQueryTest_Mercuna2D_NavRaycast.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_Mercuna2D_NavRaycast::UEnvQueryTest_Mercuna2D_NavRaycast() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->AgentClass = NULL;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}


