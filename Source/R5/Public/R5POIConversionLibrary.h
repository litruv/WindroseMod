#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "R5POIConversionLibrary.generated.h"

class AActor;
class AR5POISpawner;

UCLASS(Abstract, Blueprintable)
class R5_API UR5POIConversionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UR5POIConversionLibrary();

    UFUNCTION(BlueprintCallable)
    static void ConvertSimplePOIToActor(AR5POISpawner* POISpawner, bool bSkipTransient);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertActorToSimplePOI(AActor* Actor, bool bSkipTransient);
    
};

