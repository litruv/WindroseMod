#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5TargetDataPreview -FallbackName=R5TargetDataPreview
#include "R5TargetDataPreview.h"
#include "R5TargetDataPreview_BuildingDestroy.generated.h"

class AR5BuildingBlock;

UCLASS(Blueprintable, NoExport)
class R5_API AR5TargetDataPreview_BuildingDestroy : public AR5TargetDataPreview {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusedBuildingChanged, AR5BuildingBlock*, Block);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5BuildingBlock* SelectedBlock;
    
public:
    AR5TargetDataPreview_BuildingDestroy(const FObjectInitializer& ObjectInitializer);

};

