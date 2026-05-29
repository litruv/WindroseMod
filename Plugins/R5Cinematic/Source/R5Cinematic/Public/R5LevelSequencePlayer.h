#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=LevelSequencePlayer -FallbackName=LevelSequencePlayer
#include "LevelSequencePlayer.h"
#include "R5LevelSequencePlayer.generated.h"

class UObject;

UCLASS(Blueprintable)
class R5CINEMATIC_API UR5LevelSequencePlayer : public ULevelSequencePlayer {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> EventReceiver;
    
public:
    UR5LevelSequencePlayer(const FObjectInitializer& ObjectInitializer);

};

