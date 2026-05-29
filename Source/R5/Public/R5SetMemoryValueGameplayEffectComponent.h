#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectComponent -FallbackName=GameplayEffectComponent
#include "GameplayEffectComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_DoubleMemoryKey -FallbackName=R5AS_DoubleMemoryKey
#include "R5AS_DoubleMemoryKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_IntegerMemoryKey -FallbackName=R5AS_IntegerMemoryKey
#include "R5AS_IntegerMemoryKey.h"
#include "R5SetMemoryValueGameplayEffectComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5SetMemoryValueGameplayEffectComponent : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FR5AS_IntegerMemoryKey, int32> Integers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FR5AS_DoubleMemoryKey, double> Doubles;
    
public:
    UR5SetMemoryValueGameplayEffectComponent();

};

