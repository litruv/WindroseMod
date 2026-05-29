#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayCueNotify_Static -FallbackName=GameplayCueNotify_Static
#include "GameplayCueNotify_Static.h"
#include "Templates/SubclassOf.h"
#include "R5GameplayCue_RibbonToTargets.generated.h"

class ANiagaraActor;

UCLASS(Blueprintable)
class R5_API UR5GameplayCue_RibbonToTargets : public UGameplayCueNotify_Static {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANiagaraActor> NiagaraActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BaseLocationParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreInstigator;
    
public:
    UR5GameplayCue_RibbonToTargets();

};

