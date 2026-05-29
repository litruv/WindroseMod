#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5SelectedNPCEntityPanelVM.generated.h"

class UR5MVVMObserver_ViewModels;
class UR5NPCEntityVM;

UCLASS(Blueprintable)
class R5_API UR5SelectedNPCEntityPanelVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_ViewModels* SelectedNPCUpdateObserver;
    
public:
    UR5SelectedNPCEntityPanelVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5NPCEntityVM* GetSelectedNPCEntityVM() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeSelectedNPCStatus();
    
};

