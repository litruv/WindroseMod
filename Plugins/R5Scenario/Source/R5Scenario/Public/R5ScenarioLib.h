#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "Misc/DateTime.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5ScenarioNodeHandle.h"
#include "R5ScenarioWildcardVariableStruct.h"
#include "R5ScenarioLib.generated.h"

class UObject;
class UR5ScenarioBlackboard;

UCLASS(Blueprintable)
class R5SCENARIO_API UR5ScenarioLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FOnBlackboardValueChanged);
    
    UR5ScenarioLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid StringToGuid(const FString& Guid);
    
    UFUNCTION(BlueprintCallable)
    static bool SetWildcardValue_Time(UPARAM(Ref) FR5ScenarioWildcardVariableStruct& WC, const FDateTime& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SetWildcardValue_Tag(UPARAM(Ref) FR5ScenarioWildcardVariableStruct& WC, const FGameplayTag& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SetWildcardValue_String(UPARAM(Ref) FR5ScenarioWildcardVariableStruct& WC, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SetWildcardValue_Object(UPARAM(Ref) FR5ScenarioWildcardVariableStruct& WC, UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SetWildcardValue_Name(UPARAM(Ref) FR5ScenarioWildcardVariableStruct& WC, const FName& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SetWildcardValue_Int(UPARAM(Ref) FR5ScenarioWildcardVariableStruct& WC, const int32& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SetWildcardValue_Float(UPARAM(Ref) FR5ScenarioWildcardVariableStruct& WC, const float& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SetWildcardValue_Bool(UPARAM(Ref) FR5ScenarioWildcardVariableStruct& WC, const bool& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SetWildcardArray_Time(UPARAM(Ref) FR5ScenarioWildcardVariableStruct& WC, const TArray<FDateTime>& Array);
    
    UFUNCTION(BlueprintCallable)
    static bool SetWildcardArray_Tag(UPARAM(Ref) FR5ScenarioWildcardVariableStruct& WC, const TArray<FGameplayTag>& Array);
    
    UFUNCTION(BlueprintCallable)
    static bool SetWildcardArray_String(UPARAM(Ref) FR5ScenarioWildcardVariableStruct& WC, const TArray<FString>& Array);
    
    UFUNCTION(BlueprintCallable)
    static bool SetWildcardArray_Object(UPARAM(Ref) FR5ScenarioWildcardVariableStruct& WC, const TArray<UObject*>& Array);
    
    UFUNCTION(BlueprintCallable)
    static bool SetWildcardArray_Name(UPARAM(Ref) FR5ScenarioWildcardVariableStruct& WC, const TArray<FName>& Array);
    
    UFUNCTION(BlueprintCallable)
    static bool SetWildcardArray_Int(UPARAM(Ref) FR5ScenarioWildcardVariableStruct& WC, const TArray<int32>& Array);
    
    UFUNCTION(BlueprintCallable)
    static bool SetWildcardArray_Float(UPARAM(Ref) FR5ScenarioWildcardVariableStruct& WC, const TArray<float>& Array);
    
    UFUNCTION(BlueprintCallable)
    static bool SetWildcardArray_Bool(UPARAM(Ref) FR5ScenarioWildcardVariableStruct& WC, const TArray<bool>& Array);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGraphNodeValid(const FR5ScenarioNodeHandle& NodeHandle);
    
    UFUNCTION(BlueprintCallable)
    static void InterruptGraphNode(const FR5ScenarioNodeHandle& NodeHandle);
    
    UFUNCTION(BlueprintCallable)
    static void InternalSetWCVal_Time(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, FDateTime Value, bool IsPersistent, UR5ScenarioLib::FOnBlackboardValueChanged OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static void InternalSetWCVal_Tag(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, FGameplayTag Value, bool IsPersistent, UR5ScenarioLib::FOnBlackboardValueChanged OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static void InternalSetWCVal_String(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, const FString& Value, bool IsPersistent, UR5ScenarioLib::FOnBlackboardValueChanged OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static void InternalSetWCVal_Object(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, UObject* Value, bool IsPersistent, UR5ScenarioLib::FOnBlackboardValueChanged OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static void InternalSetWCVal_Name(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, FName Value, bool IsPersistent, UR5ScenarioLib::FOnBlackboardValueChanged OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static void InternalSetWCVal_Int(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, int32 Value, bool IsPersistent, UR5ScenarioLib::FOnBlackboardValueChanged OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static void InternalSetWCVal_Float(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, float Value, bool IsPersistent, UR5ScenarioLib::FOnBlackboardValueChanged OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static void InternalSetWCVal_Bool(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, bool Value, bool IsPersistent, UR5ScenarioLib::FOnBlackboardValueChanged OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static void InternalSetWCArr_Time(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, const TArray<FDateTime>& Value, bool IsPersistent, UR5ScenarioLib::FOnBlackboardValueChanged OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static void InternalSetWCArr_Tag(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, const TArray<FGameplayTag>& Value, bool IsPersistent, UR5ScenarioLib::FOnBlackboardValueChanged OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static void InternalSetWCArr_String(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, const TArray<FString>& Value, bool IsPersistent, UR5ScenarioLib::FOnBlackboardValueChanged OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static void InternalSetWCArr_Object(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, const TArray<UObject*>& Value, bool IsPersistent, UR5ScenarioLib::FOnBlackboardValueChanged OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static void InternalSetWCArr_Name(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, const TArray<FName>& Value, bool IsPersistent, UR5ScenarioLib::FOnBlackboardValueChanged OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static void InternalSetWCArr_Int(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, const TArray<int32>& Value, bool IsPersistent, UR5ScenarioLib::FOnBlackboardValueChanged OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static void InternalSetWCArr_Float(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, const TArray<float>& Value, bool IsPersistent, UR5ScenarioLib::FOnBlackboardValueChanged OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static void InternalSetWCArr_Bool(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, const TArray<bool>& Value, bool IsPersistent, UR5ScenarioLib::FOnBlackboardValueChanged OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    static bool InternalGetWCVal_Time(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, FDateTime& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool InternalGetWCVal_Tag(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, FGameplayTag& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool InternalGetWCVal_String(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool InternalGetWCVal_Object(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, UObject*& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool InternalGetWCVal_Name(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, FName& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool InternalGetWCVal_Int(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, int32& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool InternalGetWCVal_Float(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, float& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool InternalGetWCVal_Bool(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, bool& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool InternalGetWCArr_Time(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, TArray<FDateTime>& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool InternalGetWCArr_Tag(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, TArray<FGameplayTag>& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool InternalGetWCArr_String(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, TArray<FString>& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool InternalGetWCArr_Object(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, TArray<UObject*>& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool InternalGetWCArr_Name(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, TArray<FName>& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool InternalGetWCArr_Int(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, TArray<int32>& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool InternalGetWCArr_Float(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, TArray<float>& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool InternalGetWCArr_Bool(UR5ScenarioBlackboard* Blackboard, FGameplayTag Key, TArray<bool>& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWildcardValue_Time(const FR5ScenarioWildcardVariableStruct& WC, FDateTime& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWildcardValue_Tag(const FR5ScenarioWildcardVariableStruct& WC, FGameplayTag& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWildcardValue_String(const FR5ScenarioWildcardVariableStruct& WC, FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWildcardValue_Object(const FR5ScenarioWildcardVariableStruct& WC, UObject*& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWildcardValue_Name(const FR5ScenarioWildcardVariableStruct& WC, FName& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWildcardValue_Int(const FR5ScenarioWildcardVariableStruct& WC, int32& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWildcardValue_Float(const FR5ScenarioWildcardVariableStruct& WC, float& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWildcardValue_Bool(const FR5ScenarioWildcardVariableStruct& WC, bool& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWildcardArray_Time(const FR5ScenarioWildcardVariableStruct& WC, TArray<FDateTime>& Array);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWildcardArray_Tag(const FR5ScenarioWildcardVariableStruct& WC, TArray<FGameplayTag>& Array);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWildcardArray_String(const FR5ScenarioWildcardVariableStruct& WC, TArray<FString>& Array);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWildcardArray_Object(const FR5ScenarioWildcardVariableStruct& WC, TArray<UObject*>& Array);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWildcardArray_Name(const FR5ScenarioWildcardVariableStruct& WC, TArray<FName>& Array);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWildcardArray_Int(const FR5ScenarioWildcardVariableStruct& WC, TArray<int32>& Array);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWildcardArray_Float(const FR5ScenarioWildcardVariableStruct& WC, TArray<float>& Array);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWildcardArray_Bool(const FR5ScenarioWildcardVariableStruct& WC, TArray<bool>& Array);
    
};

