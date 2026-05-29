#pragma once
#include "CoreMinimal.h"
#include "R5BuildingComponent.h"
#include "R5BuildingSpawnerComponent.generated.h"

class UR5BuildingBrush;
class UR5BuildingItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5BuildingSpawnerComponent : public UR5BuildingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BuildingBrush* BuildingBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BuildingItem* BuildingItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnAutomatically;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BuildingBlocksBaseName;
    
    UR5BuildingSpawnerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnBlocks();
    
    UFUNCTION(BlueprintCallable)
    void ShowPreviews();
    
};

