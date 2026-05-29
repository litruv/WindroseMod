#include "MerSettings.h"

UMerSettings::UMerSettings() {
    this->DebugLengthScale = 1000.00f;
    this->bAlwaysShowErrors = true;
    this->bAutoLinkNavVolumesWithGraphs = false;
    this->AlignGraphAndVolumeOrientations = EMercunaNavGraphVolumeOrientation::LinkedRotation;
    this->GeometryCollectionTimePerFrame = 0.00f;
    this->SingleThreadedJobTimePerFrame = 0.10f;
    this->WorkerThreadType = EMercunaWorkerThreadType::IndependentWorkerThreads;
    this->NumMercunaWorkThreads = 1;
    this->bIgnoreStepForHeightClearance = false;
    this->bWarnIfSubLevelNavGraphsNotBuiltInPersistentLevel = true;
    this->bAllowNavGraphMerging = false;
    this->OctreeCellSize = 100.00f;
    this->MinPawnRadius = 1;
    this->MaxPawnRadius = 3;
}


