#pragma once
#include "CoreMinimal.h"
#include "R5AttachingDamageableActorStaticActionData.h"
#include "R5AttachingDamageableActorStateData.generated.h"

class UNiagaraSystem;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FR5AttachingDamageableActorStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollisionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* EnterNS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5AttachingDamageableActorStaticActionData> StaticActions;
    
    R5_API FR5AttachingDamageableActorStateData();
};

