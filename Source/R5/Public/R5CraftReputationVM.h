#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "Math/Color.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5CraftReputationVM.generated.h"

class UR5BLProductionReputationParams;
class UR5MVVMObserver_BlackboardIntObserver;
class UTexture2D;

UCLASS(Blueprintable)
class R5_API UR5CraftReputationVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5OnFactionReputationChanged, int32, Delta);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnFactionReputationChanged OnFactionReputationChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_BlackboardIntObserver* ReputationObserver;
    
public:
    UR5CraftReputationVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaxFactionLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasProductionReputation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalReputationForLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UR5BLProductionReputationParams> GetProductionReputationParams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxReputation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxFactionLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMarkdownTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFactionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetFactionIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFactionDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentReputationForLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentFactionLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetAccentColor() const;
    
};

