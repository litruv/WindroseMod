#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5AnimMontageForAbilityParams.generated.h"

class UAnimMontage;
class UR5AnimMontageForAbilityCollection;

UCLASS(Blueprintable)
class R5_API UR5AnimMontageForAbilityParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5AnimMontageForAbilityCollection*> AnimMontageForAbilityCollections;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UAnimMontage*> TagsToAnimMontages;
    
public:
    UR5AnimMontageForAbilityParams();

private:
    UFUNCTION(BlueprintCallable)
    void RefreshTagToAnimMontage();
    
};

