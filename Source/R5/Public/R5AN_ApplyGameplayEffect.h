#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "Templates/SubclassOf.h"
#include "R5AN_ApplyGameplayEffect.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable, CollapseCategories)
class R5_API UR5AN_ApplyGameplayEffect : public UAnimNotify {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
public:
    UR5AN_ApplyGameplayEffect();

};

