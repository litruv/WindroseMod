#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5OnMarkerUpdateDelegate.h"
#include "R5MarkersWorldSubsystem.generated.h"

class AR5MarkersReplicator;
class UR5BLQuestParams;
class UR5MarkerModelBase;
class UR5MarkerWidget;
class UR5MarkersObserver;

UCLASS(Blueprintable)
class R5_API UR5MarkersWorldSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnMarkerUpdate OnMarkerCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnMarkerUpdate OnMarkerDestroyed;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UR5MarkersObserver*> Observers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UR5MarkerModelBase*> Models;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UR5MarkerModelBase*> TickableMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UR5MarkerModelBase*> DelayedReplicatedModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AR5MarkersReplicator* Replicator;
    
public:
    UR5MarkersWorldSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnmountMarker(UR5MarkerModelBase* MarkerModel);
    
    UFUNCTION(BlueprintCallable)
    void ShowMarkersByWhiteList(const FGameplayTag& LinkTag, int32 MarkersMask);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMarkerByWidgetClass(UR5MarkerModelBase* MarkerModel, const TSoftClassPtr<UR5MarkerWidget>& WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMarker(UR5MarkerModelBase* MarkerModel);
    
    UFUNCTION(BlueprintCallable)
    void MountMarker(UR5MarkerModelBase* MarkerModel);
    
    UFUNCTION(BlueprintCallable)
    void HideMarkersByWhiteList(const FGameplayTag& LinkTag, int32 MarkersMask);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetQuestMarkersPoints(const TSoftObjectPtr<UR5BLQuestParams>& QuestParams) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UR5MarkersObserver*> GetObservers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5MarkersObserver* GetObserverByWidgetType(const TSoftClassPtr<UR5MarkerWidget>& WidgetClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UR5MarkerModelBase*> GetModels() const;
    
    UFUNCTION(BlueprintCallable)
    void AddMarker(UR5MarkerModelBase* MarkerModel, bool bShouldReplicate);
    
};

