#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5AMListenerParams_Base.generated.h"

class UR5AMTaskParams_Base;

UCLASS(Abstract, Blueprintable)
class R5ACTIONMANAGER_API UR5AMListenerParams_Base : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InternalDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5AMTaskParams_Base*> Tasks;
    
public:
    UR5AMListenerParams_Base();

};

