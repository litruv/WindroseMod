#pragma once
#include "CoreMinimal.h"
#include "R5N_WaterSubsystemInterface.h"
#include "R5N_WaterLocalBodySystem.generated.h"

class UInstancedStaticMeshComponent;
class UMaterialInstanceConstant;
class UMaterialInstanceDynamic;
class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5NWATER_API UR5N_WaterLocalBodySystem : public UR5N_WaterSubsystemInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* MIC[2];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Mid[2];
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* ISMComponent[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
public:
    UR5N_WaterLocalBodySystem(const FObjectInitializer& ObjectInitializer);

};

