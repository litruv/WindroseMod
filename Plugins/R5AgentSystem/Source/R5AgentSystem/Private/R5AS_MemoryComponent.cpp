#include "R5AS_MemoryComponent.h"

UR5AS_MemoryComponent::UR5AS_MemoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Params = NULL;
}

void UR5AS_MemoryComponent::SetVector(const FR5AS_VectorMemoryKey& MemoryKey, const FVector& Value) {
}

void UR5AS_MemoryComponent::SetUObject(const FR5AS_UObjectMemoryKey& MemoryKey, UObject* Object) {
}

void UR5AS_MemoryComponent::SetTransform(const FR5AS_TransformMemoryKey& MemoryKey, const FTransform& Value) {
}

void UR5AS_MemoryComponent::SetInteger(const FR5AS_IntegerMemoryKey& MemoryKey, int32 Value) {
}

void UR5AS_MemoryComponent::SetGameplayTagContainer(const FR5AS_GameplayTagContainerMemoryKey& MemoryKey, const FGameplayTagContainer& Value) {
}

void UR5AS_MemoryComponent::SetDouble(const FR5AS_DoubleMemoryKey& MemoryKey, double Value) {
}

FOptional_Vector UR5AS_MemoryComponent::GetVector(const FR5AS_VectorMemoryKey& MemoryKey) const {
    return FOptional_Vector{};
}

UObject* UR5AS_MemoryComponent::GetUObject(const FR5AS_UObjectMemoryKey& MemoryKey) const {
    return NULL;
}

FOptional_Transform UR5AS_MemoryComponent::GetTransform(const FR5AS_TransformMemoryKey& MemoryKey) const {
    return FOptional_Transform{};
}

UR5AS_MemoryComponent* UR5AS_MemoryComponent::GetMemoryComponent(const AActor* Actor) {
    return NULL;
}

FOptional_Int32 UR5AS_MemoryComponent::GetInteger(const FR5AS_IntegerMemoryKey& MemoryKey) const {
    return FOptional_Int32{};
}

FOptional_GameplayTagContainer UR5AS_MemoryComponent::GetGameplayTagContainer(const FR5AS_GameplayTagContainerMemoryKey& MemoryKey) const {
    return FOptional_GameplayTagContainer{};
}

FOptional_Double UR5AS_MemoryComponent::GetDouble(const FR5AS_DoubleMemoryKey& MemoryKey) const {
    return FOptional_Double{};
}


