#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "Misc/DateTime.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5GameVersion.generated.h"

UCLASS(Blueprintable)
class R5COMMONUTILS_API UR5GameVersion : public UObject {
    GENERATED_BODY()
public:
    UR5GameVersion();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString R5GameVersion_GetVersionString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString R5GameVersion_GetDetail();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString R5GameVersion_GetDeploymentIdString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime R5GameVersion_GetDateTime();
    
};

