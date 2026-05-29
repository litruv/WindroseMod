#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5POISchemeNodePreviewActor.generated.h"

class UR5POIPreviewMetaDataComponent;

UCLASS(Blueprintable, NoExport)
class R5POINTOFINTEREST_API AR5POISchemeNodePreviewActor : public AActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5POIPreviewMetaDataComponent* PreviewMetaDataComponent;
    
public:
    AR5POISchemeNodePreviewActor(const FObjectInitializer& ObjectInitializer);

};

