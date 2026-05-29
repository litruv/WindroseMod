#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=TileView -FallbackName=TileView
#include "Components/TileView.h"
#include "R5TileView.generated.h"

class AActor;

UCLASS(Blueprintable)
class R5_API UR5TileView : public UTileView {
    GENERATED_BODY()
public:
    UR5TileView();

protected:
    UFUNCTION(BlueprintCallable)
    void OnListItemOwnerEndPlayed(AActor* ItemOuter, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

