#pragma once
#include "CoreMinimal.h"
#include "ER5ScenarioComponent_ForIslandActor_IdType.h"
#include "R5ScenarioComponent.h"
#include "R5ScenarioComponent_ForIslandActor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ScenarioComponent_ForIslandActor : public UR5ScenarioComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTransient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ScenarioComponent_ForIslandActor_IdType IdType;
    
    UR5ScenarioComponent_ForIslandActor(const FObjectInitializer& ObjectInitializer);

};

