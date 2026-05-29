#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5CaptureMapBound.generated.h"

class UBoxComponent;
class UTexture;

UCLASS(Blueprintable, NoExport)
class R5_API AR5CaptureMapBound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> MapTexture;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Box;
    
public:
    AR5CaptureMapBound(const FObjectInitializer& ObjectInitializer);

};

