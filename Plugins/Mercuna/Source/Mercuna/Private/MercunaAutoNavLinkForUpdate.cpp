#include "MercunaAutoNavLinkForUpdate.h"

FMercunaAutoNavLinkForUpdate::FMercunaAutoNavLinkForUpdate() {
    this->bEnabled = false;
    this->TraversalType = EMercunaAutoNavLinkTraversalType::OneWay;
    this->Cost = 0.00f;
}

