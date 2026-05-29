#pragma once
#include "CoreMinimal.h"
#include "R5AMTaskParams_Base.h"
#include "R5AMTaskParams_ResetContext.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5ACTIONMANAGER_API UR5AMTaskParams_ResetContext : public UR5AMTaskParams_Base {
    GENERATED_BODY()
public:
    UR5AMTaskParams_ResetContext();

};

