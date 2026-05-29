#pragma once
#include "CoreMinimal.h"
#include "R5MVVMObserver.h"
#include "R5MVVMObserver_BLView.generated.h"

class UR5BLViewBase;

UCLASS(Blueprintable)
class R5MODELVIEWVIEWMODEL_API UR5MVVMObserver_BLView : public UR5MVVMObserver {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLViewBase* BLView;
    
public:
    UR5MVVMObserver_BLView();

};

