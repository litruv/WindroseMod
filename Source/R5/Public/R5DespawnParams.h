#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5DespawnParams.generated.h"

class UR5NWeatherPreset;

UCLASS(Blueprintable)
class R5_API UR5DespawnParams : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5NWeatherPreset*> ActorLifetimeWeatherPresets;
    
public:
    UR5DespawnParams();

};

