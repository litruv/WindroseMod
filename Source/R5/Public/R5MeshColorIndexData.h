#pragma once
#include "CoreMinimal.h"
#include "ER5ColorControllerType.h"
#include "R5ColorIndexDataBase.h"
#include "R5MeshColorIndexData.generated.h"

USTRUCT(BlueprintType)
struct FR5MeshColorIndexData : public FR5ColorIndexDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowInUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ColorControllerType ControllerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDefaultColor;
    
    R5_API FR5MeshColorIndexData();
};

