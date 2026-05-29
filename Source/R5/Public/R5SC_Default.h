#pragma once
#include "CoreMinimal.h"
#include "R5SC_Base.h"
#include "Templates/SubclassOf.h"
#include "R5SC_Default.generated.h"

class UR5MVVMDataAsset;
class UR5MVVMModel;
class UR5MVVMViewModel;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5SC_Default : public UR5SC_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UR5MVVMViewModel> RootViewModelClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UR5MVVMModel> RootModelClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMDataAsset* VMParams;
    
public:
    UR5SC_Default();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5MVVMViewModel* GetViewModel(TSubclassOf<UR5MVVMViewModel> InViewModelClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UR5MVVMViewModel> GetRootViewModelClass() const;
    
};

