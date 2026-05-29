#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5LandscapeRenderSubsystem.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class R5LANDSCAPERENDERER_API UR5LandscapeRenderSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BlackTexture;
    
public:
    UR5LandscapeRenderSubsystem();

};

