#include "R5HFSMCharacterCustomizationComponent.h"

int32 UR5HFSMCharacterCustomizationComponent::GetCurrentSkinDetailIndex()
{
    return 0;
}

TArray<TSoftObjectPtr<UTexture2D>> UR5HFSMCharacterCustomizationComponent::GetImagesByCharacterSexAndCategoryTag(ER5BLCharacterSex CharacterSex, FGameplayTag SectionTag) const
{
    return {};
}

bool UR5HFSMCharacterCustomizationComponent::GetIsEditor()
{
    return false;
}

void UR5HFSMCharacterCustomizationComponent::SetEyeControllerValue(int32 Index)
{
}

void UR5HFSMCharacterCustomizationComponent::ChangeBodyPartSkinDecorIndex(ER5BLCharacterBodyPartType BodyPart, int32 DecorIndex, int32 CurrentPaletteIndex)
{
}

void UR5HFSMCharacterCustomizationComponent::FinishCharacterEdit(bool bApplyChanges)
{
}

void UR5HFSMCharacterCustomizationComponent::SetCharacterViewMode(const FGameplayTag& ViewMode)
{
}

bool UR5HFSMCharacterCustomizationComponent::IsMorphLimitSet(const FR5MorphRangeLimitData& LimitData) const
{
    return false;
}

UR5CharacterCustomizationPresetParams* UR5HFSMCharacterCustomizationComponent::GetCharacterPresetParams()
{
    return nullptr;
}

void UR5HFSMCharacterCustomizationComponent::SetMorphControllerValue(const FR5BLCharacterMorphData& MorphController, const FVector& Value)
{
}

int32 UR5HFSMCharacterCustomizationComponent::GetActiveCharacterPresetIndex()
{
    return 0;
}

void UR5HFSMCharacterCustomizationComponent::SetMeshControllerValue(const FR5SelectableCompositeMeshController& MeshController, int32 Value)
{
}

TArray<TSoftObjectPtr<UTexture2D>> UR5HFSMCharacterCustomizationComponent::GetImagesByCategoryTag(FGameplayTag SectionTag) const
{
    return {};
}

UR5CharacterCustomizationPresetArchetype* UR5HFSMCharacterCustomizationComponent::GetCharacterPresetByIndex(int32 Index) const
{
    return nullptr;
}

TArray<FR5SelectableCompositeMeshController> UR5HFSMCharacterCustomizationComponent::GetMeshControllers()
{
    return {};
}

TArray<TSoftObjectPtr<UTexture2D>> UR5HFSMCharacterCustomizationComponent::GetCharacterPresetIcons() const
{
    return {};
}

TSoftObjectPtr<UTexture2D> UR5HFSMCharacterCustomizationComponent::GetImageByTag(FGameplayTag Tag) const
{
    return {};
}

FString UR5HFSMCharacterCustomizationComponent::GetCharacterAgeText()
{
    return {};
}

int32 UR5HFSMCharacterCustomizationComponent::GetCharacterAge()
{
    return 0;
}

void UR5HFSMCharacterCustomizationComponent::ApplyCharacterPreset(int32 Index)
{
}

void UR5HFSMCharacterCustomizationComponent::SetSkinDetails(int32 Index)
{
}

int32 UR5HFSMCharacterCustomizationComponent::GetSkinDecorNum(ER5BLCharacterBodyPartType BodyPart)
{
    return 0;
}

TArray<FR5BLCharacterSkinDecorData> UR5HFSMCharacterCustomizationComponent::GetSkinDecorControllers()
{
    return {};
}

int32 UR5HFSMCharacterCustomizationComponent::GetAgeIndexNum()
{
    return 0;
}

int32 UR5HFSMCharacterCustomizationComponent::GetSkinDetailsNum()
{
    return 0;
}

UR5CompositeMeshBodyTypeListParams* UR5HFSMCharacterCustomizationComponent::GetCharacterBodyTypeParams() const
{
    return nullptr;
}

UR5CharacterCustomizationPreset* UR5HFSMCharacterCustomizationComponent::GetPresetByIndex(int32 Index) const
{
    return nullptr;
}

FR5CompositeMeshEyeColorController UR5HFSMCharacterCustomizationComponent::GetEyeController()
{
    return {};
}

TSoftObjectPtr<UTexture2D> UR5HFSMCharacterCustomizationComponent::GetImageByCharacterSexAndTag(ER5BLCharacterSex CharacterSex, FGameplayTag Tag) const
{
    return {};
}

int32 UR5HFSMCharacterCustomizationComponent::GetPresetNum() const
{
    return 0;
}

bool UR5HFSMCharacterCustomizationComponent::IsOpenedInLobby() const
{
    return false;
}

void UR5HFSMCharacterCustomizationComponent::SetAgeControllerValue(int32 Index)
{
}

FR5BLCharacterCustomizationData UR5HFSMCharacterCustomizationComponent::GetCustomizationData()
{
    return {};
}

void UR5HFSMCharacterCustomizationComponent::ChangeBodyPartDecorPaletteIndex(ER5BLCharacterBodyPartType BodyPart, int32 DecorIndex, int32 CurrentPaletteIndex, bool bSearchNext)
{
}

FR5MorphRangeLimitData UR5HFSMCharacterCustomizationComponent::GetMorphLimitsForBodyPart(FGameplayTag MorphTag)
{
    return {};
}

UR5CompositeMeshSkinDecorParams* UR5HFSMCharacterCustomizationComponent::GetSkinDecorParams() const
{
    return nullptr;
}

FText UR5HFSMCharacterCustomizationComponent::GetStoredTextByTag(FGameplayTag Tag) const
{
    return {};
}

TArray<FR5BLCharacterMorphData> UR5HFSMCharacterCustomizationComponent::GetMorphControllers()
{
    return {};
}

UR5HFSMCharacterCustomizationComponent::UR5HFSMCharacterCustomizationComponent()
{
}
