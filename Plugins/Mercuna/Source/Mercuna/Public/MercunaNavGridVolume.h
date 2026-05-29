#pragma once
#include "CoreMinimal.h"
#include "MercunaNavVolume.h"
#include "MercunaNavGridVolume.generated.h"

class AMercunaNavGraph2D;

UCLASS(Blueprintable, NoExport)
class MERCUNA_API AMercunaNavGridVolume : public AMercunaNavVolume {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AMercunaNavGraph2D> NavGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VolumePriority;
    
public:
    AMercunaNavGridVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveFromGrid();
    
    UFUNCTION(BlueprintCallable)
    void AddToGrid(AMercunaNavGraph2D* NewNavGrid);
    
};

