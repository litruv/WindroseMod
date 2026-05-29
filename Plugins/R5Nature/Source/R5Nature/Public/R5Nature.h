#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5Nature.generated.h"

class AR5N_LogicActor;
class AR5NatureSettingsActor;

UCLASS(Blueprintable)
class R5NATURE_API UR5Nature : public UWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AR5N_LogicActor* LogicActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AR5NatureSettingsActor> NatureSettingsActor;
    
public:
    UR5Nature();

    UFUNCTION(BlueprintPure)
    void GetCurrentWeatherProperty(FName& Name, double& StartTime, double& EndTime) const;
    
};

