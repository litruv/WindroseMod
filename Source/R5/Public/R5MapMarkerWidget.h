#pragma once
#include "CoreMinimal.h"
#include "R5MarkerWidget.h"
#include "R5MapMarkerWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5MapMarkerWidget : public UR5MarkerWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSizeOverride;
    
    UR5MapMarkerWidget();

};

