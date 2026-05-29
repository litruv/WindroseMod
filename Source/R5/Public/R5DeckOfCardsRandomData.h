#pragma once
#include "CoreMinimal.h"
#include "R5DeckOfCardsRandomData.generated.h"

class UR5DeckOfCardsRandomParams;

USTRUCT(BlueprintType)
struct FR5DeckOfCardsRandomData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DeckOfCardsRandomParams* RandomParams;
    
    R5_API FR5DeckOfCardsRandomData();
};

