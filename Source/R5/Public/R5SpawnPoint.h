#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5SpawnPoint.generated.h"

class UR5SpawnPointParams;

UCLASS(Abstract, Blueprintable, NoExport)
class AR5SpawnPoint : public AActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5SpawnPointParams* Params;
    
public:
    AR5SpawnPoint(const FObjectInitializer& ObjectInitializer);

};

