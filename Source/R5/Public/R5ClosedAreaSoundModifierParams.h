#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "StructUtils/InstancedStruct.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimeDA -FallbackName=R5JsonRuntimeDA
#include "R5JsonRuntimeDA.h"
#include "R5ClosedAreaSoundModifierParams.generated.h"

UCLASS(Blueprintable, NonTransient)
class UR5ClosedAreaSoundModifierParams : public UR5JsonRuntimeDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> SoundModifyAgents;
    
    UR5ClosedAreaSoundModifierParams();

};

