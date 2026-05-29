#include "R5MVVMListVM.h"

UR5MVVMListVM::UR5MVVMListVM() {
}

void UR5MVVMListVM::UnselectAll() {
}

void UR5MVVMListVM::Unselect(int32 Index) {
}

TArray<UR5MVVMListEntityVM*> UR5MVVMListVM::SortList(const TArray<UR5MVVMListEntityVM*>& ListToSort, const FR5MVVMListComparatorData& Comparator) {
    return TArray<UR5MVVMListEntityVM*>();
}

void UR5MVVMListVM::Select(int32 Index) {
}

bool UR5MVVMListVM::IsPoolableList() const {
    return false;
}

bool UR5MVVMListVM::IsEmptyList() const {
    return false;
}

bool UR5MVVMListVM::HasSelectedEntity() const {
    return false;
}

TArray<UR5MVVMPoolableView*> UR5MVVMListVM::GetViewList() const {
    return TArray<UR5MVVMPoolableView*>();
}

TArray<UR5MVVMListEntityVM*> UR5MVVMListVM::GetSortedList(const FR5MVVMListComparatorData& Comparator) const {
    return TArray<UR5MVVMListEntityVM*>();
}

UR5MVVMListEntityVM* UR5MVVMListVM::GetSelectedEntity() const {
    return NULL;
}

TArray<UR5MVVMListEntityVM*> UR5MVVMListVM::GetListWithFilter(const FR5MVVMListFilterData& FiltersContainer, bool bMustFulfillAllRequirements) const {
    return TArray<UR5MVVMListEntityVM*>();
}

TArray<UR5MVVMListEntityVM*> UR5MVVMListVM::GetList() const {
    return TArray<UR5MVVMListEntityVM*>();
}

UR5MVVMListEntityVM* UR5MVVMListVM::GetEntity(int32 Index) const {
    return NULL;
}

int32 UR5MVVMListVM::GetEntitiesCount() const {
    return 0;
}

TArray<UR5MVVMListEntityVM*> UR5MVVMListVM::FilterList(const TArray<UR5MVVMListEntityVM*>& ListToFilter, const FR5MVVMListFilterData& FiltersContainer, bool bMustFulfillAllRequirements) {
    return TArray<UR5MVVMListEntityVM*>();
}


