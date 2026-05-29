#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimePDA -FallbackName=R5JsonRuntimePDA
#include "R5JsonRuntimePDA.h"
#include "R5BLGeneralAccessGroupsList.generated.h"

class UR5BLAccessGroup;

UCLASS(Blueprintable, NonTransient)
class R5BUSINESSRULES_API UR5BLGeneralAccessGroupsList : public UR5JsonRuntimePDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UR5BLAccessGroup>> DefaultGroups;
    
    UR5BLGeneralAccessGroupsList();

};

