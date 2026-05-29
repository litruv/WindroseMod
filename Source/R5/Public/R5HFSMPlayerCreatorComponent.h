#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
#include "R5PlayerCreationInfo.h"
#include "R5HFSMPlayerCreatorComponent.generated.h"

class AR5Mannequin;
class UObject;
class UR5CompositeMeshComponent;
class UR5CustomizationSwitcherComponent;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5HFSMPlayerCreatorComponent : public UHFSMStateComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AR5Mannequin* CharacterMannequin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5CompositeMeshComponent* SelectedCompositeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5CustomizationSwitcherComponent* CustomizationSwitcher;
    
public:
    UR5HFSMPlayerCreatorComponent();

    UFUNCTION(BlueprintCallable)
    void UpdatePlayerCustomizationPreview(const FString& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void ResetPlayerPreviewToDefault();
    
    UFUNCTION(BlueprintCallable)
    void PreviewEmptyPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayersListUpdated();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDefaultPlayerCreated(const UObject* Wco);
    
    UFUNCTION(BlueprintCallable)
    TArray<FR5PlayerCreationInfo> GetPlayers();
    
    UFUNCTION(BlueprintCallable)
    FR5PlayerCreationInfo GetDefaultPlayer();
    
    UFUNCTION(BlueprintCallable)
    bool CheckPlayerName(const FString& PlayerName);
    
};

