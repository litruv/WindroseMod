#pragma once
#include "CoreMinimal.h"
#include "R5WorldSubsystem.h"
#include "R5TerraformSubsystem.generated.h"

class AR5LandscapeTestHeightmapMorpher;
class UR5BLTerrainPatchView;

UCLASS(Blueprintable)
class R5_API UR5TerraformSubsystem : public UR5WorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5LandscapeTestHeightmapMorpher* HeightmapMorphActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BLTerrainPatchView* LastTerrainPatchView;
    
public:
    UR5TerraformSubsystem();

};

