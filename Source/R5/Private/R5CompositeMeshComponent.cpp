#include "R5CompositeMeshComponent.h"

UR5CompositeMeshComponent::UR5CompositeMeshComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

FString UR5CompositeMeshComponent::GetBodySexText() const
{
    return {};
}

ER5BLCharacterSex UR5CompositeMeshComponent::GetBodySex() const
{
    return {};
}

TArray<FR5BLCharacterMorphData> UR5CompositeMeshComponent::GetCurrentMorphControllers() const
{
    return {};
}

bool UR5CompositeMeshComponent::IsCharacterCustomizable() const
{
    return false;
}

FGameplayTag UR5CompositeMeshComponent::GetBodyType() const
{
    return {};
}

UR5CompositeMeshSkinDecorParams* UR5CompositeMeshComponent::GetAvailableBodyDecorData() const
{
    return nullptr;
}

bool UR5CompositeMeshComponent::IsBodyTypeChangeAvailable() const
{
    return false;
}

TArray<FR5SelectableColorController> UR5CompositeMeshComponent::GetColorControllers() const
{
    return {};
}

TArray<FR5SelectableCompositeMeshController> UR5CompositeMeshComponent::GetCustomizationMeshControllers() const
{
    return {};
}

void UR5CompositeMeshComponent::OnRep_CustomizationRecordID()
{
}

FString UR5CompositeMeshComponent::GetBodyTypeText() const
{
    return {};
}

void UR5CompositeMeshComponent::SetBody(FGameplayTag InBodyType, ER5BLCharacterSex InBodySex, bool bForceLoad)
{
}

TArray<FGameplayTag> UR5CompositeMeshComponent::GetAvailableBodyTypes(ER5BLCharacterSex BodySexFilter) const
{
    return {};
}

void UR5CompositeMeshComponent::StartCharacterEdit()
{
}

bool UR5CompositeMeshComponent::IsCustomizationEditActive() const
{
    return false;
}

void UR5CompositeMeshComponent::ConstructVisualFromParams(int32 PredefinedArchetypeIndex)
{
}

void UR5CompositeMeshComponent::LoadCharacterDataFromDB(UR5BLViewBase* BaseView)
{
}

void UR5CompositeMeshComponent::Init(USkeletalMeshComponent* InMasterMesh)
{
}

void UR5CompositeMeshComponent::SwapBodySex()
{
}

void UR5CompositeMeshComponent::SetCustomizationMeshControllerValue(const FR5SelectableCompositeMeshController& Controller, int32 Value)
{
}

void UR5CompositeMeshComponent::SetCharacterSex(ER5BLCharacterSex InCharacterSex)
{
}

bool UR5CompositeMeshComponent::IsBodySexChangeAvailable() const
{
    return false;
}

void UR5CompositeMeshComponent::DisableColorControllerOverride(const FR5SelectableColorController& Controller)
{
}

TArray<FR5BLCharacterSkinDecorData> UR5CompositeMeshComponent::GetSkinDecorData() const
{
    return {};
}

void UR5CompositeMeshComponent::SetMorphToType(ER5BLCompositeMeshBodyPartType CompositeMeshType, FName Key, float Value)
{
}

void UR5CompositeMeshComponent::SetMorphControllerValue(const FR5BLCharacterMorphData& Controller, const FVector& Value)
{
}

void UR5CompositeMeshComponent::SetColorControllerValue(const FR5SelectableColorController& Controller, int32 Value)
{
}

void UR5CompositeMeshComponent::EndCharacterEdit(bool ApplyCurrentControllers)
{
}

void UR5CompositeMeshComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
