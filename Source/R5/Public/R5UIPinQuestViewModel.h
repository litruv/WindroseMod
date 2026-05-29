#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5UIPinQuestViewModel.generated.h"

class UR5BLPlayerMetadataView;
class UR5BLQuestParams;
class UR5UIPinQuestViewModel;

UCLASS(Blueprintable)
class R5_API UR5UIPinQuestViewModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FR5OnPinQuestUpdated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnPinQuestUpdated OnPinQuestUpdated;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLPlayerMetadataView* PlayerMetadataView;
    
public:
    UR5UIPinQuestViewModel();

    UFUNCTION(BlueprintCallable)
    void PinQuest(const TSoftObjectPtr<UR5BLQuestParams>& QuestToPin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UR5BLQuestParams> GetPinnedQuest() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UR5UIPinQuestViewModel* CreatePinQuestVM(UObject* WorldContextObject);
    
};

