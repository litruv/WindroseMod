#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=ScalableFloat -FallbackName=ScalableFloat
#include "ScalableFloat.h"
#include "Templates/SubclassOf.h"
#include "R5ApplyGEForHitMultipleTargetsParams.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class R5_API UR5ApplyGEForHitMultipleTargetsParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> DamageSourceClassFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GEClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinTargetsCount;
    
    UR5ApplyGEForHitMultipleTargetsParams();

};

