#include "SentryLog.h"

USentryLog::USentryLog() {
    this->Level = ESentryLevel::Debug;
}

void USentryLog::SetLevel(ESentryLevel NewLevel) {
}

void USentryLog::SetBody(const FString& NewBody) {
}

void USentryLog::Initialize() {
}

ESentryLevel USentryLog::GetLevel() const {
    return ESentryLevel::Debug;
}

FString USentryLog::GetBody() const {
    return TEXT("");
}


