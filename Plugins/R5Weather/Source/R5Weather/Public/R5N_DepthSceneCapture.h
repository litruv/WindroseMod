#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5N_DepthSceneCapture.generated.h"

class UTextureRenderTarget2D;
class UWorld;

UCLASS(Blueprintable)
class R5WEATHER_API UR5N_DepthSceneCapture : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> CurrentWorld;
    
public:
    UR5N_DepthSceneCapture();

};

