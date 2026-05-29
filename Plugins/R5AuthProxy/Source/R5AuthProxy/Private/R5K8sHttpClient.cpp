#include "R5K8sHttpClient.h"

UR5K8sHttpClient::UR5K8sHttpClient() {
    this->Route_GetBackendServer = TEXT("/apis/r5.dev/v1/namespaces/r5-backend/r5backends/r5backend-");
    this->Route_PostBackendServer = TEXT("/apis/r5.dev/v1/namespaces/r5-backend/r5backends");
    this->BackendBuildType = TEXT("development");
    this->K8sOperatorVersion = TEXT("v57");
    this->BackendRegionIds.AddDefaulted(1);
}


