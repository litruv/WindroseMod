#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "UObject/SoftObjectPath.h"
#include "R5VersionizerSettings_MapVersionsEntry_VersionsEntry.generated.h"

USTRUCT(BlueprintType)
struct FR5VersionizerSettings_MapVersionsEntry_VersionsEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Archipelago;
    
    R5_API FR5VersionizerSettings_MapVersionsEntry_VersionsEntry();
};

