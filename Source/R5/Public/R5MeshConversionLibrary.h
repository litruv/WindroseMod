#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "R5MeshConversionLibrary.generated.h"

class AR5FoliageMeshActor;
class AStaticMeshActor;

UCLASS(Abstract, Blueprintable)
class R5_API UR5MeshConversionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UR5MeshConversionLibrary();

    UFUNCTION(BlueprintCallable)
    static void ConvertStaticMeshToFoliageMesh(AStaticMeshActor* MeshActor, bool bSkipTransient);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertFoliageMeshToStaticMesh(AR5FoliageMeshActor* FoliageActor, bool bSkipTransient);
    
};

