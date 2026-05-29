#pragma once
#include "CoreMinimal.h"
#include "GameSetting.h"
#include "GameSettingCollection.generated.h"

UCLASS(Blueprintable)
class GAMESETTINGS_API UGameSettingCollection : public UGameSetting {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGameSetting*> Settings;
    
public:
    UGameSettingCollection();

};

