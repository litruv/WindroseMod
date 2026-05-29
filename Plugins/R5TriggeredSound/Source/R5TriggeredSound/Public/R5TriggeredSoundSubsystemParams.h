#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "Engine/DataAsset.h"
#include "R5TriggeredSoundSubsystemParams.generated.h"

class UR5TriggeredSoundParams;

UCLASS(Blueprintable)
class R5TRIGGEREDSOUND_API UR5TriggeredSoundSubsystemParams : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5TriggeredSoundParams*> Params;
    
    UR5TriggeredSoundSubsystemParams();

};

