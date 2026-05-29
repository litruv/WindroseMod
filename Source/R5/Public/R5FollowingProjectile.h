#pragma once
#include "CoreMinimal.h"
#include "R5SimpleProjectile.h"
#include "R5FollowingProjectile.generated.h"

UCLASS(Blueprintable, NoExport)
class R5_API AR5FollowingProjectile : public AR5SimpleProjectile {
    GENERATED_BODY()
public:
    AR5FollowingProjectile(const FObjectInitializer& ObjectInitializer);

};

