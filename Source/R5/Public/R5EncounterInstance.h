#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5EncounterInstanceStateData.h"
#include "R5EncounterInstance.generated.h"

class UR5EncounterParams;

UCLASS(Blueprintable)
class R5_API UR5EncounterInstance : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5EncounterParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5EncounterInstanceStateData EncounterData;
    
public:
    UR5EncounterInstance();

};

