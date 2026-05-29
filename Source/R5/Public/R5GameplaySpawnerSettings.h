#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5GameplaySpawnerSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5_API UR5GameplaySpawnerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    double TickTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 SpreadSpawnOperationsPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FVector TraceDownOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float TraceDownDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSet<FSoftClassPath> HalfChunkActivityClasses;
    
    UR5GameplaySpawnerSettings();

};

