#pragma once
#include "CoreMinimal.h"
#include "R5CommonInteractableBuildingBlock.h"
#include "R5CropComponentInterface.h"
#include "R5BuildingBlock_Crop.generated.h"

class UCapsuleComponent;
class UR5CropComponent;
class USceneComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5BuildingBlock_Crop : public AR5CommonInteractableBuildingBlock, public IR5CropComponentInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CropAttachComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CropComponent* CropComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CropsBlockingVolumeComponent;
    
public:
    AR5BuildingBlock_Crop(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

