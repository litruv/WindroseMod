#include "R5AuthHttpClient.h"

UR5AuthHttpClient::UR5AuthHttpClient() {
    this->Route_Accounts_IssueOtp = TEXT("/api/Accounts/IssueOtp");
    this->Route_Accounts_ConfirmEmail = TEXT("/api/Accounts/ConfirmEmail");
    this->Route_Accounts_IssueRefreshToken = TEXT("/api/Accounts/IssueRefreshToken");
    this->Route_Accounts_VerifyAccessToken = TEXT("/api/Accounts/VerifyAccessToken");
    this->Route_Accounts_VerifySteamTicket = TEXT("/api/Accounts/VerifySteamTicket");
    this->Route_Ping = TEXT("/ping");
    this->PingCount = 3;
}


