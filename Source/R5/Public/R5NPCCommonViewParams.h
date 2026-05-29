#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMDataAsset -FallbackName=R5MVVMDataAsset
#include "R5MVVMDataAsset.h"
#include "R5NPCContainer.h"
#include "R5NPCCommonViewParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5NPCCommonViewParams : public UR5MVVMDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NPCContainer NPC;
    
    UR5NPCCommonViewParams();

};

