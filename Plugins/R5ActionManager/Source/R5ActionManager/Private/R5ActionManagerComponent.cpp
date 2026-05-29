#include "R5ActionManagerComponent.h"

UR5ActionManagerComponent::UR5ActionManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionManagerParams = NULL;
    this->Context = NULL;
}

void UR5ActionManagerComponent::AddStructToContext(const FGameplayTag& ObjectTag, const FInstancedStruct& Object) {
}

void UR5ActionManagerComponent::AddObjectToContext(const FGameplayTag& ObjectTag, UObject* Object) {
}


