#include "R5MercunaVision.h"
#include "Net/UnrealNetwork.h"

void AR5MercunaVision::StaticRegisterNativesAR5MercunaVision()
{
}


AR5MercunaVision::AR5MercunaVision(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bCollectLandscape = false;
}

void AR5MercunaVision::SortByTriangles() {
}

void AR5MercunaVision::SortByArea() {
}

void AR5MercunaVision::ShowOneMesh() {
}

void AR5MercunaVision::ShowGeometry() {
}

void AR5MercunaVision::ServerCollectGeometry() {
}

void AR5MercunaVision::PrevMesh() {
}

void AR5MercunaVision::NextMesh() {
}

void AR5MercunaVision::log() {
}

void AR5MercunaVision::HideGeometry() {
}

void AR5MercunaVision::CollectGeometryOnServer_Implementation() {
}

void AR5MercunaVision::ClientCollectGeometry() {
}

void AR5MercunaVision::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AR5MercunaVision, Meshes);
}


