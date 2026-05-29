#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=Anchors -FallbackName=Anchors
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "R5WorldMarkersCanvas.generated.h"

class APlayerCameraManager;
class UCanvasPanel;
class UR5MarkerModelBase;
class UR5WorldMarkerWidget;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5WorldMarkersCanvas : public UUserWidget {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* RootCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<UR5MarkerModelBase*, UR5WorldMarkerWidget*> Models;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCameraManager* CameraManager;
    
public:
    UR5WorldMarkersCanvas();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMarkerRemoved(UR5MarkerModelBase* MarkerModel);
    
    UFUNCTION(BlueprintCallable)
    void OnMarkerAdded(UR5MarkerModelBase* MarkerModel);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 DefineZOrder(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable)
    FAnchors CalculateMarkerAnchors(const FVector& position, bool bAbleToSnap, bool& bIsVisible);
    
};

