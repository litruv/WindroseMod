#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLCharacterBodyPartType -FallbackName=ER5BLCharacterBodyPartType
#include "ER5BLCharacterBodyPartType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLCharacterSex -FallbackName=ER5BLCharacterSex
#include "ER5BLCharacterSex.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLCharacterCustomizationData -FallbackName=R5BLCharacterCustomizationData
#include "R5BLCharacterCustomizationData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLCharacterMorphData -FallbackName=R5BLCharacterMorphData
#include "R5BLCharacterMorphData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLCharacterSkinDecorData -FallbackName=R5BLCharacterSkinDecorData
#include "R5BLCharacterSkinDecorData.h"
#include "R5CompositeMeshEyeColorController.h"
#include "R5MorphRangeLimitData.h"
#include "R5SelectableCompositeMeshController.h"
#include "R5HFSMCharacterCustomizationComponent.generated.h"

class AR5Mannequin;
class UR5CharacterCustomizationMetaParams;
class UR5CharacterCustomizationPreset;
class UR5CharacterCustomizationPresetArchetype;
class UR5CharacterCustomizationPresetParams;
class UR5CompositeMeshBodyTypeListParams;
class UR5CompositeMeshComponent;
class UR5CompositeMeshSkinDecorParams;
class UR5HFSMCameraComponent;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5HFSMCharacterCustomizationComponent : public UHFSMStateComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5CompositeMeshComponent* SelectedCompositeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AR5Mannequin* CharacterMannequin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5HFSMCameraComponent* CameraStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CharacterCustomizationMetaParams* MetaParams;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5CharacterCustomizationPresetParams* LoadedPresetParams;
    
public:
    UR5HFSMCharacterCustomizationComponent();

protected:
    UFUNCTION(BlueprintCallable)
    void SetSkinDetails(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMorphControllerValue(const FR5BLCharacterMorphData& MorphController, const FVector& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshControllerValue(const FR5SelectableCompositeMeshController& MeshController, int32 Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetEyeControllerValue(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCharacterViewMode(const FGameplayTag& ViewMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAgeControllerValue(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenedInLobby() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMorphLimitSet(const FR5MorphRangeLimitData& LimitData) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetStoredTextByTag(FGameplayTag Tag) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetSkinDetailsNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5CompositeMeshSkinDecorParams* GetSkinDecorParams() const;
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetSkinDecorNum(ER5BLCharacterBodyPartType BodyPart);
    
    UFUNCTION(BlueprintCallable)
    TArray<FR5BLCharacterSkinDecorData> GetSkinDecorControllers();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPresetNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5CharacterCustomizationPreset* GetPresetByIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    FR5MorphRangeLimitData GetMorphLimitsForBodyPart(FGameplayTag MorphTag);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FR5BLCharacterMorphData> GetMorphControllers();
    
    UFUNCTION(BlueprintCallable)
    TArray<FR5SelectableCompositeMeshController> GetMeshControllers();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsEditor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftObjectPtr<UTexture2D>> GetImagesByCharacterSexAndCategoryTag(ER5BLCharacterSex CharacterSex, FGameplayTag SectionTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftObjectPtr<UTexture2D>> GetImagesByCategoryTag(FGameplayTag SectionTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetImageByTag(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetImageByCharacterSexAndTag(ER5BLCharacterSex CharacterSex, FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable)
    FR5CompositeMeshEyeColorController GetEyeController();
    
    UFUNCTION(BlueprintCallable)
    FR5BLCharacterCustomizationData GetCustomizationData();
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentSkinDetailIndex();
    
    UFUNCTION(BlueprintCallable)
    UR5CharacterCustomizationPresetParams* GetCharacterPresetParams();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftObjectPtr<UTexture2D>> GetCharacterPresetIcons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5CharacterCustomizationPresetArchetype* GetCharacterPresetByIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5CompositeMeshBodyTypeListParams* GetCharacterBodyTypeParams() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetCharacterAgeText();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCharacterAge();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAgeIndexNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveCharacterPresetIndex();
    
public:
    UFUNCTION(BlueprintCallable)
    void FinishCharacterEdit(bool bApplyChanges);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBodyPartSkinDecorIndex(ER5BLCharacterBodyPartType BodyPart, int32 DecorIndex, int32 CurrentPaletteIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBodyPartDecorPaletteIndex(ER5BLCharacterBodyPartType BodyPart, int32 DecorIndex, int32 CurrentPaletteIndex, bool bSearchNext);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCharacterPreset(int32 Index);
    
};

