#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESentryVariantType.h"
#include "SentryVariant.h"
#include "SentryVariantHelper.generated.h"

UCLASS(Blueprintable)
class SENTRY_API USentryVariantHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USentryVariantHelper();

    UFUNCTION(BlueprintCallable)
    static bool TryGetString(const FSentryVariant& Variant, FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool TryGetMap(const FSentryVariant& Variant, TMap<FString, FSentryVariant>& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TryGetInteger(const FSentryVariant& Variant, int32& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TryGetFloat(const FSentryVariant& Variant, float& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool TryGetBool(const FSentryVariant& Variant, bool& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool TryGetArray(const FSentryVariant& Variant, TArray<FSentryVariant>& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSentryVariant MakeSentryVariantFromString(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSentryVariant MakeSentryVariantFromMap(const TMap<FString, FSentryVariant>& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSentryVariant MakeSentryVariantFromInteger(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSentryVariant MakeSentryVariantFromFloat(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSentryVariant MakeSentryVariantFromBool(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSentryVariant MakeSentryVariantFromArray(const TArray<FSentryVariant>& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESentryVariantType GetType(const FSentryVariant& Variant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetString(const FSentryVariant& Variant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FString, FSentryVariant> GetMap(const FSentryVariant& Variant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetInteger(const FSentryVariant& Variant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloat(const FSentryVariant& Variant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBool(const FSentryVariant& Variant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FSentryVariant> GetArray(const FSentryVariant& Variant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSentryVariant Conv_StringToFSentryVariant(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSentryVariant Conv_MapToFSentryVariant(const TMap<FString, FSentryVariant>& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSentryVariant Conv_IntToFSentryVariant(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSentryVariant Conv_FloatToFSentryVariant(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSentryVariant Conv_BoolToFSentryVariant(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSentryVariant Conv_ArrayToFSentryVariant(const TArray<FSentryVariant>& Value);
    
};

