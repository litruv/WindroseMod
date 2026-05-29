#pragma once
#include "CoreMinimal.h"
#include "R5CraftStation.h"
#include "R5BuildingBlock_Employee.generated.h"

class UR5CompositeMeshComponent;
class UR5MarkerComponent;
class UR5PrimitiveInteractionTargetComponent;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5BuildingBlock_Employee : public AR5CraftStation {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RotationScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CompositeMeshComponent* CompositeMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5MarkerComponent* R5Marker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PrimitiveInteractionTargetComponent* PrimitiveInteractTargetComponent;
    
public:
    AR5BuildingBlock_Employee(const FObjectInitializer& ObjectInitializer);

};

