#include "UILayoutTemplate.h"

UUILayoutTemplate::UUILayoutTemplate() {
    this->Layer = ELayoutLayer::Content;
    this->Template = NULL;
    this->TemplateWidget = NULL;
}

void UUILayoutTemplate::SetOpacity(float Opacity) {
}

void UUILayoutTemplate::MountWidgetTo(UUserWidget* Widget, FGameplayTag PlaceholderId) {
}

void UUILayoutTemplate::DemountWidget(UUserWidget* Widget, FGameplayTag PlaceholderId) {
}


