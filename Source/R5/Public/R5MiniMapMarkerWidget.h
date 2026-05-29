#pragma once
#include "CoreMinimal.h"
#include "R5MarkerWidget.h"
#include "R5MiniMapMarkerWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5MiniMapMarkerWidget : public UR5MarkerWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSizeOverride;
    
    UR5MiniMapMarkerWidget();

};

