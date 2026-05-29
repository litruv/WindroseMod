#pragma once
#include "CoreMinimal.h"
#include "MercunaTrackRequest.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct MERCUNA_API FMercunaTrackRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TrackActor;
    
    FMercunaTrackRequest();
};

