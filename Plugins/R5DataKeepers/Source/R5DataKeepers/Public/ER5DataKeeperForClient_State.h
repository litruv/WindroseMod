#pragma once
#include "CoreMinimal.h"
#include "ER5DataKeeperForClient_State.generated.h"

UENUM(BlueprintType)
enum class ER5DataKeeperForClient_State : uint8 {
    JustStarted,
    InEntranceHall,
    PassedEntranceHall,
    OpensLobby,
    LoggingIn,
    LoggedIn,
    MatchMaking,
    LoadingTransitionMap,
    ReadyToConnectBL,
    StartCoopHostServer,
    VerifyingCoopConnection,
    CoopConnectionVerified,
    ConnectingToBL,
    ConnectedToBL,
    OpeningStandaloneLevel,
    ConnectingToUe,
    ReadyForTerrainGeneration,
    TerrainGeneration,
    SpawnPlayers,
    WaitingForBuildingIsReady,
    WaitingForIslandAndLocalAccountId,
    ReadyToPlay,
    SentFarewell,
};

