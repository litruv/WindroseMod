#include "R5CaProxyClient.h"

UR5CaProxyClient::UR5CaProxyClient() {
    this->HttpClient = NULL;
    this->AuthPinger = NULL;
    this->ConnectionPinger = NULL;
}


