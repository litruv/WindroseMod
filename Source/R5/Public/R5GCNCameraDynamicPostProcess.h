#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayCueNotify_Actor -FallbackName=GameplayCueNotify_Actor
#include "GameplayCueNotify_Actor.h"
#include "R5GCNCameraDynamicPostProcess.generated.h"

class UR5CameraPostProcess;

UCLASS(Blueprintable, NoExport)
class R5_API AR5GCNCameraDynamicPostProcess : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5CameraPostProcess> PostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRemovePostProcess;
    
public:
    AR5GCNCameraDynamicPostProcess(const FObjectInitializer& ObjectInitializer);

};

