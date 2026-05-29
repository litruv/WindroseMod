#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimePDA -FallbackName=R5JsonRuntimePDA
#include "R5JsonRuntimePDA.h"
#include "R5BLEntityProgressionParams.generated.h"

class UR5BLEntityProgressionLevelParams;
class UR5BLProgressionTreeParams;

UCLASS(Blueprintable, NonTransient)
class R5BUSINESSRULES_API UR5BLEntityProgressionParams : public UR5JsonRuntimePDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLEntityProgressionLevelParams> EntityLevelParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLProgressionTreeParams> TalentTreeParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLProgressionTreeParams> StatTreeParams;
    
    UR5BLEntityProgressionParams();

};

