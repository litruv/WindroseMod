#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5SpawnAICharacterAbilityTaskData.h"
#include "SpawnAICharacterFinishedDelegateDelegate.h"
#include "R5AbilityTask_SpawnAICharacter.generated.h"

class AActor;
class UEnvQuery;
class UGameplayAbility;
class UObject;
class UR5AbilityTask_SpawnAICharacter;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_SpawnAICharacter : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnAICharacterFinishedDelegate OnFinished;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SpawnAICharacterAbilityTaskData Data;
    
public:
    UR5AbilityTask_SpawnAICharacter();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_SpawnAICharacter* SpawnAICharacter(UGameplayAbility* OwningAbility, UEnvQuery* QueryTemplate, UObject* EQSOwner, TSoftClassPtr<AActor> SpawnClass, int32 Count);
    
};

