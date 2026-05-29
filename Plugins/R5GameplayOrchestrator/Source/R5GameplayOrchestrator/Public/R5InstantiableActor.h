#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5InstantiableObjectInterface.h"
#include "R5InstantiableActor.generated.h"

UCLASS(Blueprintable, NoExport)
class R5GAMEPLAYORCHESTRATOR_API AR5InstantiableActor : public AActor, public IR5InstantiableObjectInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPreDestroyedSignature, AActor*, DestroyedActor);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bReplicatedShouldRegisterInInstancer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bReplicatedDynamicActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FR5BLRecordId ReplicatedBLRecordId;
    
public:
    AR5InstantiableActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MarkAsCompletelyDestroyed();
    

    // Fix for true pure virtual functions not being implemented
};

