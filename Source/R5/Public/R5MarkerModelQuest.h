#pragma once
#include "CoreMinimal.h"
#include "R5MarkerModelBase.h"
#include "R5MarkerModelQuest.generated.h"

class UR5BLPlayerMetadataView;
class UR5BLQuestParams;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew, HideDropdown)
class UR5MarkerModelQuest : public UR5MarkerModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FR5OnPinnedStatusChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnPinnedStatusChanged OnPinnedStatusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLQuestParams> ScenarioQuestParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ZoneIllustration;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString QuestParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLPlayerMetadataView* PlayerMetadataView;
    
public:
    UR5MarkerModelQuest();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPinned() const;
    
};

