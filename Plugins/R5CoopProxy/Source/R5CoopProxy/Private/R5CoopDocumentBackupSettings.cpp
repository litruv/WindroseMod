#include "R5CoopDocumentBackupSettings.h"

UR5CoopDocumentBackupSettings::UR5CoopDocumentBackupSettings() {
    this->MaxBackupCountPerDataBase = 10;
    this->MaxBackupCountForPreviousVersion = 1;
    this->AutoBackupPeriodTime = 600.00f;
    this->UpdateLatestPeriodTime = 60.00f;
    this->ShouldUpdateBackups = true;
}


