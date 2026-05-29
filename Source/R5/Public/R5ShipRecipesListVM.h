#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMListVM -FallbackName=R5MVVMListVM
#include "R5MVVMListVM.h"
#include "R5ShipRecipesListVM.generated.h"

class UR5BLPlayerMetadataView;

UCLASS(Blueprintable)
class R5_API UR5ShipRecipesListVM : public UR5MVVMListVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLPlayerMetadataView* PlayerMetadataView;
    
public:
    UR5ShipRecipesListVM();

};

