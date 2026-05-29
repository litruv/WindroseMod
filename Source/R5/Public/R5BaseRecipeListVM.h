#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMListVM -FallbackName=R5MVVMListVM
#include "R5MVVMListVM.h"
#include "R5BaseRecipeListVM.generated.h"

class UR5MVVMObserver_PlayerMetadata;

UCLASS(Abstract, Blueprintable)
class R5_API UR5BaseRecipeListVM : public UR5MVVMListVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_PlayerMetadata* PlayerMetadataObserver;
    
public:
    UR5BaseRecipeListVM();

};

