#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5EntityModuleEfficiencyParams.generated.h"

class UR5ModuleEfficiencyParams;

UCLASS(Blueprintable)
class R5_API UR5EntityModuleEfficiencyParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UR5ModuleEfficiencyParams*> ModuleSettings;
    
    UR5EntityModuleEfficiencyParams();

};

