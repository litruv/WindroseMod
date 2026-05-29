#include "R5AuthComponent_UpdateOtp.h"

UR5AuthComponent_UpdateOtp::UR5AuthComponent_UpdateOtp() {
}

void UR5AuthComponent_UpdateOtp::Update(bool ReenterEmail, const FString& OTP) {
}

bool UR5AuthComponent_UpdateOtp::IsOtpValid(int32 OTP) const {
    return false;
}

int32 UR5AuthComponent_UpdateOtp::GetOtp() const {
    return 0;
}

FString UR5AuthComponent_UpdateOtp::GetEmail() const {
    return TEXT("");
}


