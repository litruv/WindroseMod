#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5AnimMontageParams.h"
#include "R5AnimMontageForAbilityCollection.generated.h"

UCLASS(Blueprintable)
class R5_API UR5AnimMontageForAbilityCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5AnimMontageParams> AnimMontagesForAbilities;
    
    UR5AnimMontageForAbilityCollection();

};

