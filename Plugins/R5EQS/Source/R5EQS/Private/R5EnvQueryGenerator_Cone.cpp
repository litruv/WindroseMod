#include "R5EnvQueryGenerator_Cone.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UR5EnvQueryGenerator_Cone::UR5EnvQueryGenerator_Cone() {
    this->CenterActor = UEnvQueryContext_Querier::StaticClass();
    this->ForwardVectorProjection = ER5ForwardVectorProjection::Projection3D;
    this->CaptureComponent = NULL;
    this->CaptureMethod = ER5CaptureComponentMethod::LocationAndRotation;
    this->bIncludeContextLocation = false;
}


