#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
#include "R5ScenarioGraphNode.h"
#include "Templates/SubclassOf.h"
#include "R5ScenarioGraphNodeDialog.generated.h"

class UObject;
class UR5ScenarioGraphNodeDialog;

UCLASS(Abstract, Blueprintable)
class R5SCENARIO_API UR5ScenarioGraphNodeDialog : public UR5ScenarioGraphNode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDialogEnd);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDialogEnd OnDialogEnd;
    
    UR5ScenarioGraphNodeDialog();

    UFUNCTION(BlueprintCallable)
    void EndDialog();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UR5ScenarioGraphNodeDialog* CreateDialogNode(UObject* WorldContextObject, TSubclassOf<UR5ScenarioGraphNodeDialog> DialogClass, FGuid Guid, UR5ScenarioGraphNodeDialog*& OutObj);
    
};

