#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "StructUtils/InstancedStruct.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5AMState.h"
#include "R5ActionManagerComponent.generated.h"

class AActor;
class UObject;
class UR5AMContext;
class UR5ActionManagerParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5ACTIONMANAGER_API UR5ActionManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ActionManagerParams* ActionManagerParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ContextActors;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FR5AMState> StateToTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5AMContext* Context;
    
public:
    UR5ActionManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void AddStructToContext(const FGameplayTag& ObjectTag, const FInstancedStruct& Object);
    
    UFUNCTION(BlueprintCallable)
    void AddObjectToContext(const FGameplayTag& ObjectTag, UObject* Object);
    
};

