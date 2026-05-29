#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMObserver_BLView -FallbackName=R5MVVMObserver_BLView
#include "R5MVVMObserver_BLView.h"
#include "R5MVVMObserver_PlayerMetadata.generated.h"

UCLASS(Blueprintable)
class R5_API UR5MVVMObserver_PlayerMetadata : public UR5MVVMObserver_BLView {
    GENERATED_BODY()
public:
    UR5MVVMObserver_PlayerMetadata();

};

