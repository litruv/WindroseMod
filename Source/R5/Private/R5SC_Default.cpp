#include "R5SC_Default.h"

UR5MVVMViewModel* UR5SC_Default::GetViewModel(TSubclassOf<UR5MVVMViewModel> InViewModelClass) const
{
    return nullptr;
}

TSubclassOf<UR5MVVMViewModel> UR5SC_Default::GetRootViewModelClass() const
{
    return {};
}

UR5SC_Default::UR5SC_Default()
{
}
