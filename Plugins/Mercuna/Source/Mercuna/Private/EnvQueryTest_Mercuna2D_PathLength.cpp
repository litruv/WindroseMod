#include "EnvQueryTest_Mercuna2D_PathLength.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_Mercuna2D_PathLength::UEnvQueryTest_Mercuna2D_PathLength() {
    this->AgentClass = NULL;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}


