#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ContextualSpawner -ObjectName=R5ContextualSpawnerSubsystemBase -FallbackName=R5ContextualSpawnerSubsystemBase
#include "R5ContextualSpawnerSubsystemBase.h"
#include "R5ContextualSpawnerSpec.h"
#include "R5ContextualSpawnerSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5_API UR5ContextualSpawnerSubsystem : public UR5ContextualSpawnerSubsystemBase {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float SpawnCooldownAfterFailedRestrictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSet<FSoftClassPath> DestroyByRelevancyClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FR5ContextualSpawnerSpec> SpawnerSpecs;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> DestroyByRelevancyActors;
    
public:
    UR5ContextualSpawnerSubsystem();

};

