#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5AMTaskParams_Base.generated.h"

UCLASS(Abstract, Blueprintable)
class R5ACTIONMANAGER_API UR5AMTaskParams_Base : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InternalDescription;
    
public:
    UR5AMTaskParams_Base();

};

