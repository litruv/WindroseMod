#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordPath -FallbackName=R5BLRecordPath
#include "R5BLRecordPath.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=ER5ScenarioMathComparison -FallbackName=ER5ScenarioMathComparison
#include "ER5ScenarioMathComparison.h"
#include "R5ScenarioListener_CrewListener.h"
#include "R5ScenarioListener_CrewHeadcountReachedValue.generated.h"

class UR5BLScenarioSave_CrewView;

UCLASS(Blueprintable)
class R5_API UR5ScenarioListener_CrewHeadcountReachedValue : public UR5ScenarioListener_CrewListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ScenarioMathComparison ComparisonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Headcount;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLScenarioSave_CrewView* CachedCrewView;
    
public:
    UR5ScenarioListener_CrewHeadcountReachedValue();

private:
    UFUNCTION(BlueprintCallable)
    void OnCrewHeadcountChanged(const FR5BLRecordPath& CrewViewPath);
    
};

