#pragma once
#include "CoreMinimal.h"
#include "R5AMActivatedContextActor.h"
#include "R5AMHidableContextActor.generated.h"

UCLASS(Blueprintable, NoExport)
class R5ACTIONMANAGER_API AR5AMHidableContextActor : public AR5AMActivatedContextActor {
    GENERATED_BODY()
public:
    AR5AMHidableContextActor(const FObjectInitializer& ObjectInitializer);

};

