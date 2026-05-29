#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5DataKeepers -ObjectName=R5DataKeeper_GameMode -FallbackName=R5DataKeeper_GameMode
#include "R5DataKeeper_GameMode.h"
#include "R5EventManagerInterface.h"
#include "R5GameMode.generated.h"

class UR5AgonesServerComponent;
class UR5EventManagerComponent;

UCLASS(Blueprintable, MinimalAPI, NoExport, NonTransient)
class AR5GameMode : public AR5DataKeeper_GameMode, public IR5EventManagerInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5EventManagerComponent* EventManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AgonesServerComponent* R5AgonesServerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseEngineDefaultSpawnPipeline;
    
public:
    AR5GameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5EventManagerComponent* GetEventManagerComponent() const;
    

    // Fix for true pure virtual functions not being implemented
};

