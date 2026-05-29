#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5NPCInfoVM.generated.h"

class UR5NPCInfoListVM;

UCLASS(Blueprintable)
class R5_API UR5NPCInfoVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NPCInfoListVM* NPCInfoListVM;
    
public:
    UR5NPCInfoVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5NPCInfoListVM* GetPlayerNPCInfoListVM() const;
    
};

