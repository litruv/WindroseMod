#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5CommonPlayerEncounterData.h"
#include "R5EncounterInstanceStateData.h"
#include "R5EncounterRequirement.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class R5_API UR5EncounterRequirement : public UObject {
    GENERATED_BODY()
public:
    UR5EncounterRequirement();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsMet(const FR5CommonPlayerEncounterData& CommonData, FR5EncounterInstanceStateData& EncounterData) const;
    
};

