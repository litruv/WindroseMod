#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Requirement -ObjectName=R5Requirement_CommonBase -FallbackName=R5Requirement_CommonBase
#include "R5Requirement_CommonBase.h"
#include "R5Requirement_Shelter.generated.h"

class UR5ShelterCheckSetup;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5Requirement_Shelter : public UR5Requirement_CommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShelter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShelterCheckSetup* ShelterCheckSetup;
    
    UR5Requirement_Shelter();

};

