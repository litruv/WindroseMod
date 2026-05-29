#include "R5AuthComponent_ShowErrorMessage.h"

UR5AuthComponent_ShowErrorMessage::UR5AuthComponent_ShowErrorMessage() {
}

int32 UR5AuthComponent_ShowErrorMessage::GetLastStatusCode() const {
    return 0;
}

FText UR5AuthComponent_ShowErrorMessage::GetLastResponseDescription() const {
    return FText::GetEmpty();
}

int32 UR5AuthComponent_ShowErrorMessage::GetLastResponseCode() const {
    return 0;
}

FString UR5AuthComponent_ShowErrorMessage::GetLastErrorMessage() const {
    return TEXT("");
}

FText UR5AuthComponent_ShowErrorMessage::GetErrorMessage() const {
    return FText::GetEmpty();
}

FText UR5AuthComponent_ShowErrorMessage::GetErrorDescription() const {
    return FText::GetEmpty();
}

int32 UR5AuthComponent_ShowErrorMessage::GetErrorCode() const {
    return 0;
}

void UR5AuthComponent_ShowErrorMessage::Done() {
}


