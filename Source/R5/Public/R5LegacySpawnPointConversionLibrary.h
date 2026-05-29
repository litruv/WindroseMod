#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5LegacySpawnPointConversionLibrary.generated.h"

class UR5GameplaySpawnerParams;
class UR5SpawnPointParams;

UCLASS(Blueprintable)
class R5_API UR5LegacySpawnPointConversionLibrary : public UWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UR5SpawnPointParams*, UR5GameplaySpawnerParams*> Library;
    
public:
    UR5LegacySpawnPointConversionLibrary();

};

