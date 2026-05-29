#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "R5ModuleEfficiencyParams.generated.h"

class UR5ModuleEfficiencyCalculator;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class UR5ModuleEfficiencyParams : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UR5ModuleEfficiencyCalculator> CalculatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InfluencingGameplayTags;
    
    UR5ModuleEfficiencyParams();

};

