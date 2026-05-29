#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5ReplicatedObject.generated.h"

class AActor;
class UWorld;

UCLASS(Blueprintable)
class R5_API UR5ReplicatedObject : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* OwnerCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* WorldCache;
    
public:
    UR5ReplicatedObject();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAuthority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwner() const;
    
};

