#pragma once
#include "CoreMinimal.h"
#include "R5SC_Base.h"
#include "R5SC_BaseCraft.generated.h"

class UR5BaseCraftUIParams;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class R5_API UR5SC_BaseCraft : public UR5SC_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BaseCraftUIParams* BaseCraftParams;
    
public:
    UR5SC_BaseCraft();

};

