#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimePDA -FallbackName=R5JsonRuntimePDA
#include "R5JsonRuntimePDA.h"
#include "ER5BLAccountPermissions.h"
#include "ER5BLAccountRoles.h"
#include "R5BLAccessGroup.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5BUSINESSRULES_API UR5BLAccessGroup : public UR5JsonRuntimePDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ER5BLAccountPermissions> Permissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ER5BLAccountRoles> AccountRoles;
    
    UR5BLAccessGroup();

};

