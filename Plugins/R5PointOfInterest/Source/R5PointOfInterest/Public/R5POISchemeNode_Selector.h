#pragma once
#include "CoreMinimal.h"
#include "R5POISchemeNode.h"
#include "R5POISchemeNode_Selector.generated.h"

UCLASS(Blueprintable)
class R5POINTOFINTEREST_API UR5POISchemeNode_Selector : public UR5POISchemeNode {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UR5POISchemeNode*, float> Weights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PreviewIndex;
    
public:
    UR5POISchemeNode_Selector();

};

