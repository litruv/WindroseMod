#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLCharacterSex -FallbackName=ER5BLCharacterSex
#include "ER5BLCharacterSex.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLCompositeMeshBodyPartType -FallbackName=ER5BLCompositeMeshBodyPartType
#include "ER5BLCompositeMeshBodyPartType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLCharacterCustomizationData -FallbackName=R5BLCharacterCustomizationData
#include "R5BLCharacterCustomizationData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLCharacterMorphData -FallbackName=R5BLCharacterMorphData
#include "R5BLCharacterMorphData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLCharacterSkinDecorData -FallbackName=R5BLCharacterSkinDecorData
#include "R5BLCharacterSkinDecorData.h"
#include "R5EquippedSlotData.h"
#include "R5SelectableColorController.h"
#include "R5SelectableCompositeMeshController.h"
#include "R5SignificanceInterface.h"
#include "R5CompositeMeshComponent.generated.h"

class UR5BLViewBase;
class UR5CharacterCustomizationPresetArchetype;
class UR5CharacterCustomizationPresetParams;
class UR5CompositeMeshBodyTypeListParams;
class UR5CompositeMeshColorCustomizationParams;
class UR5CompositeMeshComponentBaseParams;
class UR5CompositeMeshComponentMorphParams;
class UR5CompositeMeshParams;
class UR5CompositeMeshSkinDecorParams;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5CompositeMeshComponent : public UActorComponent, public IR5SignificanceInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CompositeMeshBodyTypeListParams* BodyTypeParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CompositeMeshComponentBaseParams* DefaultParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CompositeMeshComponentMorphParams* MorphParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CompositeMeshColorCustomizationParams* ColorParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CompositeMeshSkinDecorParams* BodyDecorParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5CharacterCustomizationPresetParams> PresetParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMasterMeshCanBeOptimized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5CharacterCustomizationPresetArchetype* ArchetypePreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOverrideAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ER5BLCompositeMeshBodyPartType, UR5CompositeMeshParams*> DefaultCompositeMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FR5BLCharacterCustomizationData SavedCustomizationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FR5BLCharacterCustomizationData CurrentCustomizationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5EquippedSlotData> BuildedCompositeMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FR5SelectableColorController> CurrentColorControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CustomizationRecordID, meta=(AllowPrivateAccess=true))
    FR5BLRecordId CustomizationRecordID;
    
public:
    UR5CompositeMeshComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SwapBodySex();
    
    UFUNCTION(BlueprintCallable)
    void StartCharacterEdit();
    
    UFUNCTION(BlueprintCallable)
    void SetMorphToType(ER5BLCompositeMeshBodyPartType CompositeMeshType, FName Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMorphControllerValue(const FR5BLCharacterMorphData& Controller, const FVector& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizationMeshControllerValue(const FR5SelectableCompositeMeshController& Controller, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetColorControllerValue(const FR5SelectableColorController& Controller, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterSex(ER5BLCharacterSex InCharacterSex);
    
    UFUNCTION(BlueprintCallable)
    void SetBody(FGameplayTag InBodyType, ER5BLCharacterSex InBodySex, bool bForceLoad);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CustomizationRecordID();
    
    UFUNCTION(BlueprintCallable)
    void LoadCharacterDataFromDB(UR5BLViewBase* BaseView);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCustomizationEditActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterCustomizable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBodyTypeChangeAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBodySexChangeAvailable() const;
    
    UFUNCTION(BlueprintCallable)
    void Init(USkeletalMeshComponent* InMasterMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5BLCharacterSkinDecorData> GetSkinDecorData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5SelectableCompositeMeshController> GetCustomizationMeshControllers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5BLCharacterMorphData> GetCurrentMorphControllers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5SelectableColorController> GetColorControllers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBodyTypeText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetBodyType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBodySexText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ER5BLCharacterSex GetBodySex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetAvailableBodyTypes(ER5BLCharacterSex BodySexFilter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5CompositeMeshSkinDecorParams* GetAvailableBodyDecorData() const;
    
    UFUNCTION(BlueprintCallable)
    void EndCharacterEdit(bool ApplyCurrentControllers);
    
    UFUNCTION(BlueprintCallable)
    void DisableColorControllerOverride(const FR5SelectableColorController& Controller);
    
    UFUNCTION(BlueprintCallable)
    void ConstructVisualFromParams(int32 PredefinedArchetypeIndex);
    

    // Fix for true pure virtual functions not being implemented
};

