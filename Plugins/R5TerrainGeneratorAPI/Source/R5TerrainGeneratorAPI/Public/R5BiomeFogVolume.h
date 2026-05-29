#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5BiomeFogVolume.generated.h"

class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable, NoExport)
class R5TERRAINGENERATORAPI_API AR5BiomeFogVolume : public AActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FogVolume;
    
public:
    AR5BiomeFogVolume(const FObjectInitializer& ObjectInitializer);

};

