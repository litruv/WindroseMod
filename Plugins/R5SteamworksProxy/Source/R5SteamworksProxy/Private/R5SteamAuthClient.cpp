#include "R5SteamAuthClient.h"

UR5SteamAuthClient::UR5SteamAuthClient() {
    this->SteamCallbacksTimerRate = 0.10f;
    this->BackendAuthIdentityName = TEXT("Backend Auth");
}


