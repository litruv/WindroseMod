#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "R5BuildingItemRuntimeData.h"
#include "R5BuildingItemWidget.generated.h"

class UButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class R5_API UR5BuildingItemWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BuildingItemRuntimeData ItemData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* btn_Root;
    
public:
    UR5BuildingItemWidget();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void OnItemSelectAction();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void OnItemHoverAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAssetName() const;
    
};

