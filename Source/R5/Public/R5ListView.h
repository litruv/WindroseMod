#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ListView -FallbackName=ListView
#include "Components/ListView.h"
#include "R5ListView.generated.h"

class AActor;

UCLASS(Blueprintable)
class R5_API UR5ListView : public UListView {
    GENERATED_BODY()
public:
    UR5ListView();

protected:
    UFUNCTION(BlueprintCallable)
    void OnListItemOwnerEndPlayed(AActor* ItemOuter, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

