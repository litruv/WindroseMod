#include "R5ItemConversionVM.h"

bool UR5ItemConversionVM::ConvertSelectedItem()
{
    return false;
}

void UR5ItemConversionVM::OnRecipeSelected()
{
}

UR5BaseSelectedRecipePanelVM* UR5ItemConversionVM::GetSelectedRecipePanelVM() const
{
    return nullptr;
}

UR5ConvertedItemRecipeList* UR5ItemConversionVM::GetConvertedItemRecipeList() const
{
    return nullptr;
}

UR5ItemConversionVM::UR5ItemConversionVM()
{
}
