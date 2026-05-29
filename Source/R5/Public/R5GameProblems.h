#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "ER5GameStatus.h"
#include "R5GameProblems.generated.h"

class UObject;
class UR5GameProblems;

UCLASS(Blueprintable, DefaultConfig, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class R5_API UR5GameProblems : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChangeStatus);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeStatus OnChangeStatus;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopServerOnDataInconsistency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsDataConsistent, meta=(AllowPrivateAccess=true))
    bool IsDataConsistent;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint32 WorldHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WorldHashComputed, meta=(AllowPrivateAccess=true))
    bool bWorldHashComputed;
    
public:
    UR5GameProblems(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_WorldHashComputed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDataConsistent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UR5GameProblems* GetR5GameProblems(const UObject* Wco);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsR5CheckHappened();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDataConsistent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetGameStatusText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetGameStatusAndCountersText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ER5GameStatus GetGameStatus() const;
    
};

