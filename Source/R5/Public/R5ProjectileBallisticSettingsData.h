#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "R5BallisticProjectileRicochetData.h"
#include "R5ProjectileBallisticSettingsData.generated.h"

USTRUCT(BlueprintType)
struct FR5ProjectileBallisticSettingsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BallisticProjectileRicochetData DefaultRicochetSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, FR5BallisticProjectileRicochetData> PhysMaterialRicochetSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CalibresRuleCount;
    
    R5_API FR5ProjectileBallisticSettingsData();
};

