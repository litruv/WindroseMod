#include "R5NetDriver.h"

UR5NetDriver::UR5NetDriver() : UIpNetDriver(FObjectInitializer::Get()) {
    this->ReplicationDriverClassName = TEXT("/Script/R5.R5ReplicationGraph");
    this->ChannelDefinitions.AddDefaulted(4);
    this->bIsPassthrough = false;
}


