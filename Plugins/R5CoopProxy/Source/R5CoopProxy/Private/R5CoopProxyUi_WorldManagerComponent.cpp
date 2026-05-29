#include "R5CoopProxyUi_WorldManagerComponent.h"

UR5CoopProxyUi_WorldManagerComponent::UR5CoopProxyUi_WorldManagerComponent() {
}

void UR5CoopProxyUi_WorldManagerComponent::SetCurrentWorldId(const FString& WorldId) {
}

void UR5CoopProxyUi_WorldManagerComponent::SaveWorldDescription(const FR5CoopProxyUi_WorldDescription& WorldDescription) {
}



TArray<FR5CoopProxyUi_WorldDescription> UR5CoopProxyUi_WorldManagerComponent::GetWorldDescriptions() const {
    return TArray<FR5CoopProxyUi_WorldDescription>();
}

TArray<UR5WDSPresetParams*> UR5CoopProxyUi_WorldManagerComponent::GetWDSPresets() const {
    return TArray<UR5WDSPresetParams*>();
}

TArray<UR5WDSCategoryParams*> UR5CoopProxyUi_WorldManagerComponent::GetWDSCategories() const {
    return TArray<UR5WDSCategoryParams*>();
}

TArray<FR5CoopProxyUi_DevMapEntry> UR5CoopProxyUi_WorldManagerComponent::GetDevMaps() {
    return TArray<FR5CoopProxyUi_DevMapEntry>();
}

FR5BLRecordId UR5CoopProxyUi_WorldManagerComponent::GetCurrentWorldId() const {
    return FR5BLRecordId{};
}

FR5CoopProxyUi_WorldDescription UR5CoopProxyUi_WorldManagerComponent::GetCurrentWorldDescription() const {
    return FR5CoopProxyUi_WorldDescription{};
}

void UR5CoopProxyUi_WorldManagerComponent::DeleteWorldDescription(const FString& WorldId) {
}


