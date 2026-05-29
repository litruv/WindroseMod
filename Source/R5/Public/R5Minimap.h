#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Math/Vector2D.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "Math/Vector4.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "ER5MapInitMethod.h"
#include "R5Minimap.generated.h"

class UCanvasPanel;
class UR5MarkerModelBase;
class UR5MiniMapMarkerWidget;
class UTexture;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5Minimap : public UUserWidget {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* RootCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* RetainedCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CurrentCenterPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<UR5MarkerModelBase*, UR5MiniMapMarkerWidget*> Models;
    
public:
    UR5Minimap();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdatePlayer(float Angle, float InCurrentZoom, const FFloatInterval& InZoomInterval);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPayerCameraRotation(float Angle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMapTexture(const TSoftObjectPtr<UTexture>& Texture, ER5MapInitMethod MapInitMethod);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMapRotation(float Angle);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMarkerRemoved(UR5MarkerModelBase* MarkerModel);
    
    UFUNCTION(BlueprintCallable)
    void OnMarkerAdded(UR5MarkerModelBase* MarkerModel);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetZoomRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector4 GetPawnPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFogAreaScale() const;
    
};

