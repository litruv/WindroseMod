#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "UObject/SoftObjectPath.h"
#include "R5VersionizerSettings_MapVersionsEntry_VersionsEntry.h"
#include "R5VersionizerSettings_MapVersionsEntry.generated.h"

USTRUCT(BlueprintType)
struct FR5VersionizerSettings_MapVersionsEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Map;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5VersionizerSettings_MapVersionsEntry_VersionsEntry> Versions;
    
    R5_API FR5VersionizerSettings_MapVersionsEntry();
};

