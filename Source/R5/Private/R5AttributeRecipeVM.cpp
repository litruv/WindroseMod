#include "R5AttributeRecipeVM.h"

FR5BLItemAttribute UR5AttributeRecipeVM::GetModifyAttribute() const
{
    return {};
}

TSoftObjectPtr<UR5BLInventoryItem> UR5AttributeRecipeVM::GetItemToModify() const
{
    return {};
}

int32 UR5AttributeRecipeVM::GetItemsToModifyCount() const
{
    return 0;
}

int32 UR5AttributeRecipeVM::GetCurrentAttributeValue() const
{
    return 0;
}

int32 UR5AttributeRecipeVM::GetMaxAttributeValue() const
{
    return 0;
}

TArray<FR5BLItemAttribute> UR5AttributeRecipeVM::GetItemAttributes() const
{
    return {};
}

FR5BLItemsStackData UR5AttributeRecipeVM::GetItemsStackToModify() const
{
    return {};
}

UR5AttributeRecipeVM::UR5AttributeRecipeVM()
{
}
