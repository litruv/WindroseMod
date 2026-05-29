#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ListView -FallbackName=ListView
#include "Components/ListView.h"
#include "GameSettingListView.generated.h"

class UGameSettingVisualData;

UCLASS(Blueprintable)
class GAMESETTINGS_API UGameSettingListView : public UListView {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameSettingVisualData* VisualData;
    
public:
    UGameSettingListView();

};

