#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5BoardingVisualElementsGroup.h"
#include "R5BoardingVisualBridgesParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5BoardingVisualBridgesParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BoardingVisualElementsGroup> VisualElementGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateVisualBridges;
    
    UR5BoardingVisualBridgesParams();

};

