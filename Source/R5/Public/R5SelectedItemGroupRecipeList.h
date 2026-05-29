#pragma once
#include "CoreMinimal.h"
#include "R5BaseRecipeListVM.h"
#include "R5SelectedItemGroupRecipeList.generated.h"

class UR5MVVMObserver_ViewModels;

UCLASS(Blueprintable)
class R5_API UR5SelectedItemGroupRecipeList : public UR5BaseRecipeListVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_ViewModels* SelectedItemGroupRecipeListObserver;
    
public:
    UR5SelectedItemGroupRecipeList();

};

