#include "R5AS_ValueSelectorsFunctionLibrary.h"

UR5AS_ValueSelectorsFunctionLibrary::UR5AS_ValueSelectorsFunctionLibrary() {
}

void UR5AS_ValueSelectorsFunctionLibrary::SetVectorValue(FR5AS_VectorValueSelector& Selector, const FVector& Value) {
}

void UR5AS_ValueSelectorsFunctionLibrary::SetUObjectValue(FR5AS_UObjectValueSelector& Selector, UObject* Value) {
}

void UR5AS_ValueSelectorsFunctionLibrary::SetTransformValue(FR5AS_TransformValueSelector& Selector, const FTransform& Value) {
}

void UR5AS_ValueSelectorsFunctionLibrary::SetDoubleValue(FR5AS_DoubleValueSelector& Selector, const double Value) {
}

void UR5AS_ValueSelectorsFunctionLibrary::InitVector(FR5AS_VectorValueSelector& Selector, const AActor* OwnerActor) {
}

void UR5AS_ValueSelectorsFunctionLibrary::InitUObject(FR5AS_UObjectValueSelector& Selector, const AActor* OwnerActor) {
}

void UR5AS_ValueSelectorsFunctionLibrary::InitDouble(FR5AS_DoubleValueSelector& Selector, const AActor* OwnerActor) {
}

FOptional_Vector UR5AS_ValueSelectorsFunctionLibrary::GetVectorValue(const FR5AS_VectorValueSelector& Selector) {
    return FOptional_Vector{};
}

UObject* UR5AS_ValueSelectorsFunctionLibrary::GetUObjectValue(const FR5AS_UObjectValueSelector& Selector) {
    return NULL;
}

FTransform UR5AS_ValueSelectorsFunctionLibrary::GetTransformValue(const FR5AS_TransformValueSelector& Selector) {
    return FTransform{};
}

FOptional_Double UR5AS_ValueSelectorsFunctionLibrary::GetDoubleValue(const FR5AS_DoubleValueSelector& Selector) {
    return FOptional_Double{};
}


