#include "R5K8sClientSettings.h"

UR5K8sClientSettings::UR5K8sClientSettings() {
    this->IP = TEXT("10.174.87.31");
    this->Port = 6443;
    this->GameServerNamespace = TEXT("r5-gameservers");
    this->TerminationGracePeriodSeconds = 600;
    this->HealthInitialDelaySeconds = 60;
}


