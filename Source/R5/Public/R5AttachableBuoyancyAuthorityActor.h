#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5SignificanceLevel.h"
#include "R5BuoyancyAuthorityActor.h"
#include "R5SignificanceActor.h"
#include "R5AttachableBuoyancyAuthorityActor.generated.h"

class AActor;
class UR5AttachableBuoyancySignificanceParams;

UCLASS(Blueprintable, NoExport)
class R5_API AR5AttachableBuoyancyAuthorityActor : public AR5BuoyancyAuthorityActor, public IR5SignificanceActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SignificanceParams, meta=(AllowPrivateAccess=true))
    UR5AttachableBuoyancySignificanceParams* SignificanceParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SignificanceTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel ServerSignificanceLevel;
    
public:
    AR5AttachableBuoyancyAuthorityActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SignificanceParams();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDestroyed(AActor* DestroyedOwner);
    

    // Fix for true pure virtual functions not being implemented
};

