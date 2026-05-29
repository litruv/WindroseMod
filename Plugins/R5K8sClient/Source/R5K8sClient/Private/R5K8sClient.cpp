#include "R5K8sClient.h"

UR5K8sClient::UR5K8sClient() {
}

bool UR5K8sClient::ValidateServerName(const FString& ServerName) {
    return false;
}

void UR5K8sClient::SetGameServerTechName(const FString& Name) {
}

void UR5K8sClient::OpenLevel(const FPayloadGameServerGetResponseItem& Response) {
}

bool UR5K8sClient::IsVersionCompatible(const FPayloadGameServerGetResponseItem& Item) {
    return false;
}

FString UR5K8sClient::GetGameServerTechName() {
    return TEXT("");
}

void UR5K8sClient::GetGameServers(const FGameServerParams& Params) {
}

void UR5K8sClient::GetGameServer(const FString& Name) {
}

void UR5K8sClient::CreateGameServer(const FGameServerParams& Params) {
}


