#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5LandscapeTestHeightmapMorpher.generated.h"

class ALandscape;

UCLASS(Blueprintable, NoExport)
class R5_API AR5LandscapeTestHeightmapMorpher : public AActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALandscape*> DirtyLandscapes;
    
public:
    AR5LandscapeTestHeightmapMorpher(const FObjectInitializer& ObjectInitializer);

};

