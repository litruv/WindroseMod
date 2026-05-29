#include "R5BLDumpStorageSettings.h"

UR5BLDumpStorageSettings::UR5BLDumpStorageSettings() {
    this->bEnabled = false;
    this->IndexFilename = TEXT("index");
    this->RecordsDirectory = TEXT("objects");
    this->ZipCompressionLevel = 1;
    this->ZipEncryptionPassword = TEXT("X0ML+f7ysLkbfHnDE72vKRugdqHatQRZdBhjM6oWz64=");
    this->TestDocumentSizeKB = 15.00f;
    this->TestDocumentsNum = 600;
    this->TestZipCompressionLevel = 1;
    this->TestZipEncryptionPassword = TEXT("test-encrypt-pass-1136@789@");
    this->StorageDirectory = TEXT("DumpStorage");
    this->TestStorageDirectory = TEXT("TestDumpStorage");
}


