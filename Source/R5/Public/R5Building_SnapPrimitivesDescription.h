#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5Building_SnapPrimitivesDescription.generated.h"

class UR5Building_SnapPrimitiveBase;
class UStaticMesh;

UCLASS(Blueprintable)
class R5_API UR5Building_SnapPrimitivesDescription : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UStaticMesh>, UR5Building_SnapPrimitiveBase*> AllowedSnappingPrimitives;
    
    UR5Building_SnapPrimitivesDescription();

};

