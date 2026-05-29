#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "R5BuoyancyUtility.generated.h"

class AActor;
class UR5AttachableBuoyancySignificanceParams;
class UR5NPhys_ModelSettings;

UCLASS(Blueprintable)
class R5_API UR5BuoyancyUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UR5BuoyancyUtility();

    UFUNCTION(BlueprintCallable)
    static void DeattachBuoyancyFromActor(const AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static void DeattachBuoyancyAuthorityFromActor(const AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static void AttachBuoyancyToActor(AActor* Target, UR5NPhys_ModelSettings* ModelSettings);
    
    UFUNCTION(BlueprintCallable)
    static void AttachBuoyancyAuthorityToActor(AActor* Target, UR5NPhys_ModelSettings* InModelSettings, UR5AttachableBuoyancySignificanceParams* InSignificanceParams);
    
};

