#include "MercunaAutoNavLink.h"

FMercunaAutoNavLink::FMercunaAutoNavLink() {
    this->bEnabled = false;
    this->TraversalType = EMercunaAutoNavLinkTraversalType::OneWay;
    this->Cost = 0.00f;
    this->HeightMin = 0.00f;
    this->HeightMax = 0.00f;
}

