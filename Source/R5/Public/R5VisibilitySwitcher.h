#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5SignificanceInterface.h"
#include "R5VisibilitySwitcher.generated.h"

class UR5VisibilitySwitcherSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5VisibilitySwitcher : public UActorComponent, public IR5SignificanceInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5VisibilitySwitcherSettings> Settings;
    
public:
    UR5VisibilitySwitcher(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

