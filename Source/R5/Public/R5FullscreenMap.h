#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Math/Vector2D.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "ER5InputType.h"
#include "ER5MapInitMethod.h"
#include "Templates/SubclassOf.h"
#include "R5FullscreenMap.generated.h"

class UCanvasPanel;
class UR5MapMarkerWidget;
class UR5MarkerModelBase;
class UTexture;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5FullscreenMap : public UUserWidget {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* RootCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbsoluteZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ZoomRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CurrentCenterPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFastTravelMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<UR5MarkerModelBase*, UR5MapMarkerWidget*> Models;
    
public:
    UR5FullscreenMap();

    UFUNCTION(BlueprintCallable)
    void ZoomMap(float Delta);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMapTexture(const TSoftObjectPtr<UTexture>& Texture, ER5MapInitMethod MapInitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OverrideZoom(const float NewZoom);
    
    UFUNCTION(BlueprintCallable)
    void OverrideMapCenter(const FVector2D& NewCenter);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMarkerRemoved(UR5MarkerModelBase* MarkerModel);
    
    UFUNCTION(BlueprintCallable)
    void OnMarkerAdded(UR5MarkerModelBase* MarkerModel);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputTypeChanged(ER5InputType NewInputType);
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveMap(const FVector2D& Delta);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetRelativeForWorld(const FVector& position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMarkerPlacePosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFogAreaScale() const;
    
    UFUNCTION(BlueprintCallable)
    UR5MarkerModelBase* FindModelUnderCursor(const TSubclassOf<UR5MarkerModelBase>& ModelClass);
    
};

