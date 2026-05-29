#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
#include "R5WorldSubsystem.h"
#include "R5FastTravelManager.generated.h"

class UR5FastTravelComponent;

UCLASS(Blueprintable)
class R5_API UR5FastTravelManager : public UR5WorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UR5FastTravelComponent*> KnownFastTravels;
    
public:
    UR5FastTravelManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UR5FastTravelComponent*> GetKnownFastTravels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5FastTravelComponent* FindKnownFastTravelByGuid(const FGuid& Guid) const;
    
};

