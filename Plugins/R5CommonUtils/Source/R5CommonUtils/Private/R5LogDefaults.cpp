#include "R5LogDefaults.h"

FR5LogDefaults::FR5LogDefaults() {
    this->AlignBlocksInLog = false;
    this->FrameCounterAlignment = 0;
    this->UserMessageAlignment = 0;
    this->FileLineAlignment = 0;
    this->MaxFunctionNameLength = 0;
    this->ShrinkTemplateInFunctionName = false;
    this->ShrinkLambdaInFunctionName = false;
}

