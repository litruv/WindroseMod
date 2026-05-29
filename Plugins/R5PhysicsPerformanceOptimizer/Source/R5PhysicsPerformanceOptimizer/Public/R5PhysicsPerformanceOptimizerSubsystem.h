#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5PhysicsPerformanceCharacters.h"
#include "R5PhysicsPerformanceLockOnTimeData.h"
#include "R5PhysicsPerformanceOptimizerSubsystem.generated.h"

class AActor;
class ACharacter;

UCLASS(Blueprintable)
class R5PHYSICSPERFORMANCEOPTIMIZER_API UR5PhysicsPerformanceOptimizerSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACharacter*> AllCharactersToOptimize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACharacter*> CharactersToIterateByActivator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACharacter*> CachedActivatedCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ACharacter*, FR5PhysicsPerformanceLockOnTimeData> LockedByTimeCharacters;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int64, FR5PhysicsPerformanceCharacters> ActivationIdToCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PhysicsActivators;
    
public:
    UR5PhysicsPerformanceOptimizerSubsystem();

};

