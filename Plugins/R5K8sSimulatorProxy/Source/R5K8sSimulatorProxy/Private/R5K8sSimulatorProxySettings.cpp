#include "R5K8sSimulatorProxySettings.h"

UR5K8sSimulatorProxySettings::UR5K8sSimulatorProxySettings() {
    this->CommunicationChannel = ER5K8sSimulatorProxyChannel::K8s;
    this->K8sSimulatorAddress = TEXT("127.0.0.1:6106");
}

UR5K8sSimulatorProxySettings* UR5K8sSimulatorProxySettings::Get() {
    return NULL;
}


