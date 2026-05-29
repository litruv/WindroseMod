#include "R5CoopProxySettings.h"

UR5CoopProxySettings::UR5CoopProxySettings() {
    this->P2pStunServerAddress = TEXT("83.220.168.78");
    this->P2pStunServerPort = 3478;
    this->P2pLocalPortMin = 42001;
    this->P2pLocalPortMax = 44999;
    this->IsP2pSecureConnection = true;
    this->UseUdpSocketsDirectly = true;
    this->UseP2pConnectionChecker = false;
    this->StorageDirName = TEXT("SaveProfiles");
    this->DbDirName = TEXT("RocksDB_v2");
    this->DbDirNameV1 = TEXT("RocksDB");
    this->BackupDirName = TEXT("RocksDB_v2_Backups");
    this->HostServerDirectory = TEXT("Builds/WindowsServer/R5/Binaries/Win64");
    this->IsServerInviteCodeMandatory = true;
    this->ServerInviteCodeLength = 8;
    this->ServerInviteCodeMaxLength = 32;
    this->IsServerInviteCodeMd5FromPermanentServerId = true;
    this->ServerInviteCodeValidCharacters = TEXT("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
    this->ServerPasswordLength = 6;
    this->ServerPasswordMaxLength = 32;
    this->ServerPasswordCharacters = TEXT("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
    this->UseEditorForHostServer = true;
    this->EditorServerArgs.AddDefaulted(12);
    this->ServerArgs.AddDefaulted(3);
    this->OnboardingHostServerArgs.AddDefaulted(1);
    this->RunServerWithVisibleCmd = false;
    this->HideProcess = false;
    this->UseMockServerDescription = false;
    this->HostServerProcessPriority = 1;
    this->bUseBackupsInEditor = false;
    this->BackupsNum = 30;
    this->BackupsDirSuffix = TEXT("_Backups");
}

int32 UR5CoopProxySettings::GetServerPasswordMaxLength() const {
    return 0;
}

int32 UR5CoopProxySettings::GetServerInviteCodeMaxLength() const {
    return 0;
}

int32 UR5CoopProxySettings::GetMaxPlayerCount() const {
    return 0;
}

UR5CoopProxySettings* UR5CoopProxySettings::GetCoopProxySettings() {
    return NULL;
}


