#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5AS_AgentComponent.generated.h"

class AActor;
class UR5AS_AgentComponent;
class UR5AS_AgentParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5AGENTSYSTEM_API UR5AS_AgentComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AS_AgentParams* Params;
    
public:
    UR5AS_AgentComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    static UR5AS_AgentComponent* GetAgentComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void AddCategories(UR5AS_AgentComponent* Agent, const FGameplayTagContainer& CategoryTags, float HoldTime);
    
    UFUNCTION(BlueprintCallable)
    void AddAgent(UR5AS_AgentComponent* AddedAgent, float MinHoldTime, float Delay);
    
};

