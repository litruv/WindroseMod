#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5LoadingScreen -ObjectName=R5LoadingScreenHolder -FallbackName=R5LoadingScreenHolder
#include "R5LoadingScreenHolder.h"
#include "R5DataKeeperLoadingScreenHolder.generated.h"

UCLASS(Blueprintable)
class UR5DataKeeperLoadingScreenHolder : public UR5LoadingScreenHolder {
    GENERATED_BODY()
public:
    UR5DataKeeperLoadingScreenHolder();

};

