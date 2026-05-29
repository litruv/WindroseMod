#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "Templates/SubclassOf.h"
#include "R5VoyageAbility.generated.h"

class AActor;
class UGameplayEffect;

UCLASS(Blueprintable)
class R5_API UR5VoyageAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredPlayerBlackboardTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> OngoingGE;
    
public:
    UR5VoyageAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void CaptainChanged(AActor* NewCaptain, AActor* OldCaptain);
    
    UFUNCTION(BlueprintCallable)
    void AliveStatusChanged(bool AliveStatus);
    
};

