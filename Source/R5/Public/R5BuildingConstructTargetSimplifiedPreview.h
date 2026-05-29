#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5BuildingConstructTargetSimplifiedPreview.generated.h"

class UMaterialInterface;
class UR5BuildingBrush;
class UStaticMeshComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5BuildingConstructTargetSimplifiedPreview : public AActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BuildingBrush* PrevBuildingBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PrevMaterial;
    
public:
    AR5BuildingConstructTargetSimplifiedPreview(const FObjectInitializer& ObjectInitializer);

};

