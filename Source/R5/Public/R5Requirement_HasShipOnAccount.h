#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Requirement -ObjectName=R5Requirement_CommonBase -FallbackName=R5Requirement_CommonBase
#include "R5Requirement_CommonBase.h"
#include "R5Requirement_HasShipOnAccount.generated.h"

class AR5ShipPawnBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5Requirement_HasShipOnAccount : public UR5Requirement_CommonBase {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AR5ShipPawnBase>> ShipClasses;
    
public:
    UR5Requirement_HasShipOnAccount();

};

