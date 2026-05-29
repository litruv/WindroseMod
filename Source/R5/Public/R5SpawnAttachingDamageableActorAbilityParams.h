#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5SpawnAttachingDamageableActorAbilityData.h"
#include "R5SpawnAttachingDamageableActorAbilityParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5SpawnAttachingDamageableActorAbilityParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SpawnAttachingDamageableActorAbilityData Data;
    
    UR5SpawnAttachingDamageableActorAbilityParams();

};

