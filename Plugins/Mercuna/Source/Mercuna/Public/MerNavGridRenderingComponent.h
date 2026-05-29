#pragma once
#include "CoreMinimal.h"
#include "MerNavGraphRenderingComponent.h"
#include "MerNavGridRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMerNavGridRenderingComponent : public UMerNavGraphRenderingComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawPolygons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawPolygonLabels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawGenerationBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawAutoJumpLinks;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DrawDistance;
    
public:
    UMerNavGridRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

