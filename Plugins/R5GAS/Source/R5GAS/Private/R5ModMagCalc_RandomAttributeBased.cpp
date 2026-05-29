#include "R5ModMagCalc_RandomAttributeBased.h"

UR5ModMagCalc_RandomAttributeBased::UR5ModMagCalc_RandomAttributeBased() {
    this->RelevantAttributesToCapture.AddDefaulted(1);
    this->AttributeBasedRandomCurveRandom = NULL;
    this->SuccessOutput = 0.00f;
    this->FailedOutput = 0.00f;
}


