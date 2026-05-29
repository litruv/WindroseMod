#include "R5BLAppStatsModel.h"

FR5BLAppStatsModel::FR5BLAppStatsModel() {
    this->AppType = ER5BLAppType::Unknown;
    this->FpsAverage = 0;
    this->FpsPercentile10 = 0;
    this->FpsPercentile50 = 0;
    this->FpsPercentile90 = 0;
    this->FpsMin = 0;
    this->FpsMax = 0;
    this->PingAverage = 0.00f;
    this->PingPercentile10 = 0.00f;
    this->PingPercentile50 = 0.00f;
    this->PingPercentile90 = 0.00f;
    this->PingMin = 0.00f;
    this->PingMax = 0.00f;
}

