#pragma once
#include "CoreMinimal.h"
#include "R5HFSMCharacterCustomizationComponent.h"
#include "R5HFSMDebugCustomizationComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5HFSMDebugCustomizationComponent : public UR5HFSMCharacterCustomizationComponent {
    GENERATED_BODY()
public:
    UR5HFSMDebugCustomizationComponent();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEditorBuild() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void FindCompositeMesh(bool bSearchFurtherFromPlayer);
    
};

