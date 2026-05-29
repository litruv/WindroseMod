#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "UObject/SoftObjectPath.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5MapData.h"
#include "R5K8sUISettings.generated.h"

UCLASS(Blueprintable)
class R5K8SCLIENT_API UR5K8sUISettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5MapData> SupportedMaps;
    
    UR5K8sUISettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FR5MapData MakeMapData(FText MapName, const FString& Map, FText Description, FSoftObjectPath MapThumbnail);
    
};

