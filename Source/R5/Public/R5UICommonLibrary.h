#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "UObject/SoftObjectPath.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WaterZoneInfoBlueprint.h"
#include "R5UICommonLibrary.generated.h"

class AActor;
class APlayerState;
class UAbilitySystemComponent;
class UCurveTable;
class UObject;
class UR5BuildingItem;
class UWidget;
class UWorld;

UCLASS(Blueprintable)
class R5_API UR5UICommonLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UR5UICommonLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool TrySetVirtualKeyboardEnabled(const UObject* WorldContextObject, bool bEnabled, UWidget* TextWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<UR5BuildingItem> MakeBuildingItemSoftPtrFromPath(const FSoftObjectPath& Path);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCurveTable* LoadCurves(TSoftObjectPtr<UCurveTable> CurveTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasUI(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FWaterZoneInfoBlueprint GetZoneFactionInfo(const UObject* WorldContextObject, const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetWorldRandomSeed(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetInventoryWeight(AActor* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetInteractionTargetAvatarActor(UAbilitySystemComponent* ASC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetInteractionTargetActorForLocalPlayer(const UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetInteractionTargetActor(const APlayerState* PlayerState);
    
};

