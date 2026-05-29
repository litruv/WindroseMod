#pragma once
#include "CoreMinimal.h"
#include "ER5Faction.generated.h"

UENUM(BlueprintType)
enum class ER5Faction : uint8 {
    None,
    Player,
    AnimalAggressive,
    AnimalNeutral,
    BlackbeardMinions,
    EnglishRenegades,
    DavyJonesMinions,
    DendroCorrupted,
    Boss,
    PlayerShip,
    PVEShip,
    NPC,
    BlackbeardShip,
    CiviliansShip,
    BucaneersShip,
    SmugglersShip,
    BrethrenShip,
    QuestAllyShip,
    QuestEnemyShip,
    QuestNeutralShip,
};

