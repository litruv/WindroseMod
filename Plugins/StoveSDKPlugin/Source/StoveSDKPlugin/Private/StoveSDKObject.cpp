#include "StoveSDKObject.h"

UStoveSDKObject::UStoveSDKObject() {
}

void UStoveSDKObject::StoveSDKUnInit() {
}

bool UStoveSDKObject::StoveSDKInit(const FStoveConfig& Config) {
    return false;
}

FString UStoveSDKObject::StoveSDKGetUserId() {
    return TEXT("");
}

FStoveTokenResult UStoveSDKObject::StoveSDKGetToken() {
    return FStoveTokenResult{};
}

EStoveInitState UStoveSDKObject::StoveSDKGetInitState() {
    return EStoveInitState::None;
}

bool UStoveSDKObject::RestartAppIfNecessary(const FStoveConfig& Config) {
    return false;
}


