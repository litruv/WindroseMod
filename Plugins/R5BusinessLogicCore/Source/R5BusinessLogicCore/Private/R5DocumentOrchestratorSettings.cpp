#include "R5DocumentOrchestratorSettings.h"

UR5DocumentOrchestratorSettings::UR5DocumentOrchestratorSettings() {
    this->UseDoServerAddress = false;
    this->IsSecured = false;
    this->ShouldMockDo = true;
    this->MockDoReplyPauseMs = 0;
    this->MockDoLockPollingFrequencyS = 0;
}


