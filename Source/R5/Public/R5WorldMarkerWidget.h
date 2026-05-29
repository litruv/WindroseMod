#pragma once
#include "CoreMinimal.h"
#include "R5MarkerWidget.h"
#include "R5WorldMarkerWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5WorldMarkerWidget : public UR5MarkerWidget {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableEdgeFading;
    
public:
    UR5WorldMarkerWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnabledEdgeFading() const;
    
};

