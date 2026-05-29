#include "R5MVVMView.h"

UR5MVVMView::UR5MVVMView() : UUserWidget(FObjectInitializer::Get()) {
}

void UR5MVVMView::Show() {
}

void UR5MVVMView::SetViewModel(UR5MVVMViewModel* InViewModel) {
}

void UR5MVVMView::OnViewModelUpdated_Implementation() {
}

void UR5MVVMView::OnShow_Implementation() {
}

void UR5MVVMView::OnInternalViewModelUpdated() {
}

void UR5MVVMView::OnHide_Implementation() {
}

bool UR5MVVMView::IsViewActive() const {
    return false;
}

void UR5MVVMView::Hide() {
}

bool UR5MVVMView::HasValidViewModel() const {
    return false;
}

UR5MVVMViewModel* UR5MVVMView::GetViewModel() const {
    return NULL;
}


