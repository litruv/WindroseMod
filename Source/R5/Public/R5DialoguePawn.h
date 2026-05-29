#pragma once
#include "CoreMinimal.h"
#include "R5DialogueActor.h"
#include "R5DialoguePawn.generated.h"

class UR5CompositeMeshComponent;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5DialoguePawn : public AR5DialogueActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RotationScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CompositeMeshComponent* CompositeMeshComponent;
    
public:
    AR5DialoguePawn(const FObjectInitializer& ObjectInitializer);

};

