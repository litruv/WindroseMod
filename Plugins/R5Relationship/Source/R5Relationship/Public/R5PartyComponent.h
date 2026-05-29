#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5PartyComponent.generated.h"

class AActor;
class UR5PartyComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5RELATIONSHIP_API UR5PartyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPartyChanged, int32, NewPartyId);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyChanged OnPartyChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PartyId, meta=(AllowPrivateAccess=true))
    int32 PartyId;
    
public:
    UR5PartyComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PartyId();
    
public:
    UFUNCTION(BlueprintCallable)
    void JoinToParty(int32 InPartyId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPartyId() const;
    
    UFUNCTION(BlueprintCallable)
    static UR5PartyComponent* GetPartyComponent(AActor* TargetActor);
    
};

