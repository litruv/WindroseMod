#include "R5ScenarioComponent_ForPlayer.h"

UR5ScenarioComponent_ForPlayer::UR5ScenarioComponent_ForPlayer(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5ScenarioComponent_ForPlayer::SendEventToServer_Implementation(const FGameplayTag& EventTag)
{
}

void UR5ScenarioComponent_ForPlayer::Server_ReceiveQuestUpdate_Implementation(const FSoftObjectPath QuestParamsPath)
{
}

void UR5ScenarioComponent_ForPlayer::SendUIActionToServer_Implementation(const FString& ScenarioID, const FGuid& NodeID, FName ActionName, bool IsSkipped)
{
}

void UR5ScenarioComponent_ForPlayer::SendDialogReplyToServer_Implementation(const FString& ScenarioID, const FGuid& NodeID, bool WasChosen, bool IsSkipped)
{
}
