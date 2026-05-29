#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMModel -FallbackName=R5MVVMModel
#include "R5MVVMModel.h"
#include "R5EntityProgressionModel.generated.h"

class UR5BLEntityProgressionView;

UCLASS(Blueprintable)
class R5ENTITYPROGRESSION_API UR5EntityProgressionModel : public UR5MVVMModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLEntityProgressionView* EntityProgressionView;
    
public:
    UR5EntityProgressionModel();

};

