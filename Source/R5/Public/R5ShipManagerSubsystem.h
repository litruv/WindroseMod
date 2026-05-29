#pragma once
#include "CoreMinimal.h"
#include "R5WorldSubsystem.h"
#include "R5ShipManagerSubsystem.generated.h"

class AActor;
class AR5SpawnAnchor;
class UR5BLShipView;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5_API UR5ShipManagerSubsystem : public UR5WorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AR5SpawnAnchor*> SpawnAnchors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UR5BLShipView*> ShipViews;
    
public:
    UR5ShipManagerSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnShipDestroyed(AActor* Actor);
    
};

