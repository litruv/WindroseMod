#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5BuildingGraph.h"
#include "R5BuildingBlockContainer.generated.h"

class AActor;

UCLASS(Blueprintable)
class R5_API UR5BuildingBlockContainer : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Holder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BuildingGraph BuildingGraph;
    
public:
    UR5BuildingBlockContainer();

};

