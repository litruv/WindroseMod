#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Math/Vector2D.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "R5MarkerWidget.generated.h"

class APlayerState;
class UR5MarkerModelBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class R5_API UR5MarkerWidget : public UUserWidget {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MarkerModelBase* Model;
    
public:
    UR5MarkerWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZoomChanged(float CurrentZoom, const FFloatInterval& ZoomInterval, float AbsoluteZoom);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSizeChanged(const FVector2D& Size);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerInitialized(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNameChanged(const FText& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMarkerMounted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMarkerInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMarkerDemounted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMarkerDeinitialized();
    
    UFUNCTION(BlueprintCallable)
    void GetModel(TSubclassOf<UR5MarkerModelBase> ModelClass, UR5MarkerModelBase*& OutModel);
    
};

