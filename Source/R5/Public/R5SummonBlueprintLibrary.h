#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5SummonBlueprintLibrary.generated.h"

class AActor;
class AR5ShipPawnBase;
class UObject;

UCLASS(Blueprintable)
class R5_API UR5SummonBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UR5SummonBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SendSummonGameplayEventToActor(AActor* Actor, FR5BLRecordId ShipRecordId);
    
    UFUNCTION(BlueprintCallable)
    static void GetSummonAbilityCooldownRemainingAndDuration(AActor* Actor, float& CooldownDurationTime, float& CooldownRemainingTime);
    
    UFUNCTION(BlueprintCallable)
    static AR5ShipPawnBase* FindShipInWorld(const UObject* Wco, const FR5BLRecordId& ShipRecordId);
    
};

