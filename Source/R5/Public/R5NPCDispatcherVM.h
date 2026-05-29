#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5NPCDispatcherVM.generated.h"

class UR5NPCListVM;
class UR5SelectedNPCEntityPanelVM;

UCLASS(Blueprintable)
class R5_API UR5NPCDispatcherVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NPCListVM* NPCListVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5SelectedNPCEntityPanelVM* SelectedNPCEntityPanelVM;
    
public:
    UR5NPCDispatcherVM();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectedNPCChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5SelectedNPCEntityPanelVM* GetSelectedNPCEntityPanelVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5NPCListVM* GetNPCListVM() const;
    
};

