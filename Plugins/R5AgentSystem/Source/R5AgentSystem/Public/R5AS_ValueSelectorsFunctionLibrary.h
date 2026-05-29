#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=Optional_Double -FallbackName=Optional_Double
#include "Optional_Double.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=Optional_Vector -FallbackName=Optional_Vector
#include "Optional_Vector.h"
#include "R5AS_DoubleValueSelector.h"
#include "R5AS_TransformValueSelector.h"
#include "R5AS_UObjectValueSelector.h"
#include "R5AS_VectorValueSelector.h"
#include "R5AS_ValueSelectorsFunctionLibrary.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class R5AGENTSYSTEM_API UR5AS_ValueSelectorsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UR5AS_ValueSelectorsFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetVectorValue(FR5AS_VectorValueSelector& Selector, const FVector& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetUObjectValue(FR5AS_UObjectValueSelector& Selector, UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetTransformValue(FR5AS_TransformValueSelector& Selector, const FTransform& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDoubleValue(FR5AS_DoubleValueSelector& Selector, const double Value);
    
    UFUNCTION(BlueprintCallable)
    static void InitVector(FR5AS_VectorValueSelector& Selector, const AActor* OwnerActor);
    
    UFUNCTION(BlueprintCallable)
    static void InitUObject(FR5AS_UObjectValueSelector& Selector, const AActor* OwnerActor);
    
    UFUNCTION(BlueprintCallable)
    static void InitDouble(FR5AS_DoubleValueSelector& Selector, const AActor* OwnerActor);
    
    UFUNCTION(BlueprintCallable)
    static FOptional_Vector GetVectorValue(const FR5AS_VectorValueSelector& Selector);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetUObjectValue(const FR5AS_UObjectValueSelector& Selector);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetTransformValue(const FR5AS_TransformValueSelector& Selector);
    
    UFUNCTION(BlueprintCallable)
    static FOptional_Double GetDoubleValue(const FR5AS_DoubleValueSelector& Selector);
    
};

