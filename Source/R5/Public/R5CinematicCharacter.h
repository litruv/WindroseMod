#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "GameFramework/Character.h"
#include "R5CinematicCharacter.generated.h"

class UR5CompositeMeshComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5CinematicCharacter : public ACharacter {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CompositeMeshComponent* CompositeMeshComponent;
    
public:
    AR5CinematicCharacter(const FObjectInitializer& ObjectInitializer);

};

