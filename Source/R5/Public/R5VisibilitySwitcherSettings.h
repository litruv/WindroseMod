#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimeDA -FallbackName=R5JsonRuntimeDA
#include "R5JsonRuntimeDA.h"
#include "R5ComponentSwitcherSettings_Item.h"
#include "R5VisibilitySwitcherSettings.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5VisibilitySwitcherSettings : public UR5JsonRuntimeDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickIntervalS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ComponentSwitcherSettings_Item> Items;
    
    UR5VisibilitySwitcherSettings();

};

