#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5WorldDescriptionSettingsSystem.generated.h"

class UR5WDSInstancedParameter;

UCLASS(Blueprintable)
class R5WDSSYSTEM_API UR5WorldDescriptionSettingsSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5WDSInstancedParameter*> InstancedParameters;
    
public:
    UR5WorldDescriptionSettingsSystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5WDSInstancedParameter* GetWDSParameter(const FGameplayTag& ParameterTag) const;
    
};

