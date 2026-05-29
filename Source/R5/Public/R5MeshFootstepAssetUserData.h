#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "R5MeshFootstepAssetUserData.generated.h"

class UR5MeshFootstepParams;

UCLASS(Blueprintable, EditInlineNew)
class UR5MeshFootstepAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MeshFootstepParams* MeshFootstepParams;
    
    UR5MeshFootstepAssetUserData();

};

