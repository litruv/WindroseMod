#pragma once
#include "CoreMinimal.h"
#include "R5SpawnLootSetup.h"
#include "R5SpawnLootSetup_Circle.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5SpawnLootSetup_Circle : public UR5SpawnLootSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UR5SpawnLootSetup_Circle();

};

