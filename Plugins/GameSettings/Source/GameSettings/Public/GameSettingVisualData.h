#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "GameSettingVisualData.generated.h"

class UGameSetting;
class UGameSettingListEntryBase;

UCLASS(Blueprintable)
class GAMESETTINGS_API UGameSettingVisualData : public UDataAsset {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UGameSetting>, TSubclassOf<UGameSettingListEntryBase>> EntryWidgetForClass;
    
public:
    UGameSettingVisualData();

};

