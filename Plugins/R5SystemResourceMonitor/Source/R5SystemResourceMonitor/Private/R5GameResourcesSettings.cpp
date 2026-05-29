#include "R5GameResourcesSettings.h"

UR5GameResourcesSettings::UR5GameResourcesSettings() {
    this->ShouldLogPC = true;
    this->ShouldLogKuber = true;
    this->HistoryReportMaxStepsNum = 1;
    this->MemoryUsagePlotWidth = 180;
    this->MemoryUsagePlotHeight = 30;
    this->MemoryUsagePlotYStepMb = 250;
    this->MemoryUsagePlotYNumWidth = 10;
    this->MemoryUsagePlotTimelineStepWidth = 10;
    this->MemoryWarningThreshold = 90.00f;
    this->MemoryCriticalWarningThreshold = 95.00f;
    this->IsMemoryLeakDetectorEnabled = true;
    this->MemoryLeakHistoryDepthToDetect = 60;
    this->MemoryLeakMaxGrowthRateMbPerS = 5.00f;
    this->MemoryLeakHistoryDepthForError = 180;
}


