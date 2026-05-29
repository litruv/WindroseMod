#pragma once
#include "CoreMinimal.h"
#include "R5AMActivatedContextActor.h"
#include "R5AMCollisionContextActor.generated.h"

UCLASS(Blueprintable, NoExport)
class R5ACTIONMANAGER_API AR5AMCollisionContextActor : public AR5AMActivatedContextActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActivatedCollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DisabledCollisionProfileName;
    
public:
    AR5AMCollisionContextActor(const FObjectInitializer& ObjectInitializer);

};

