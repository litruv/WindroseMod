#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
#include "R5MarkersHandlerInterface.h"
#include "Templates/SubclassOf.h"
#include "R5HFSMFastTravelComponent.generated.h"

class UR5MarkerModelFastTravel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class R5_API UR5HFSMFastTravelComponent : public UHFSMStateComponent, public IR5MarkersHandlerInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UR5MarkerModelFastTravel> FastTravelMarkerModelClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5MarkerModelFastTravel*> TravelModels;
    
public:
    UR5HFSMFastTravelComponent();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFastTravelFailed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFastTravelIsFromShip();
    

    // Fix for true pure virtual functions not being implemented
};

