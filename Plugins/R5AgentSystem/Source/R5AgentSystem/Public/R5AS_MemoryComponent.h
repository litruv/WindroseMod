#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=Optional_Double -FallbackName=Optional_Double
#include "Optional_Double.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=Optional_GameplayTagContainer -FallbackName=Optional_GameplayTagContainer
#include "Optional_GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=Optional_Int32 -FallbackName=Optional_Int32
#include "Optional_Int32.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=Optional_Transform -FallbackName=Optional_Transform
#include "Optional_Transform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=Optional_Vector -FallbackName=Optional_Vector
#include "Optional_Vector.h"
#include "R5AS_DoubleMemoryKey.h"
#include "R5AS_GameplayTagContainerMemoryKey.h"
#include "R5AS_IntegerMemoryKey.h"
#include "R5AS_TransformMemoryKey.h"
#include "R5AS_UObjectMemoryKey.h"
#include "R5AS_VectorMemoryKey.h"
#include "R5ProbabilityModifier.h"
#include "R5AS_MemoryComponent.generated.h"

class AActor;
class UObject;
class UR5AS_MemoryComponent;
class UR5AS_MemoryParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5AGENTSYSTEM_API UR5AS_MemoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AS_MemoryParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ProbabilityModifier> ProbabilityModifiers;
    
public:
    UR5AS_MemoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVector(const FR5AS_VectorMemoryKey& MemoryKey, const FVector& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetUObject(const FR5AS_UObjectMemoryKey& MemoryKey, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetTransform(const FR5AS_TransformMemoryKey& MemoryKey, const FTransform& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInteger(const FR5AS_IntegerMemoryKey& MemoryKey, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGameplayTagContainer(const FR5AS_GameplayTagContainerMemoryKey& MemoryKey, const FGameplayTagContainer& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDouble(const FR5AS_DoubleMemoryKey& MemoryKey, double Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOptional_Vector GetVector(const FR5AS_VectorMemoryKey& MemoryKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetUObject(const FR5AS_UObjectMemoryKey& MemoryKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOptional_Transform GetTransform(const FR5AS_TransformMemoryKey& MemoryKey) const;
    
    UFUNCTION(BlueprintCallable)
    static UR5AS_MemoryComponent* GetMemoryComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOptional_Int32 GetInteger(const FR5AS_IntegerMemoryKey& MemoryKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOptional_GameplayTagContainer GetGameplayTagContainer(const FR5AS_GameplayTagContainerMemoryKey& MemoryKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOptional_Double GetDouble(const FR5AS_DoubleMemoryKey& MemoryKey) const;
    
};

