#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5OnSubtitlesChangedDelegate.h"
#include "R5OnSubtitlesTypeChangedDelegate.h"
#include "R5SubtitlesClearRequestDelegate.h"
#include "R5SubtitleManager.generated.h"

class UObject;
class UR5SubtitleManager;
class UWorld;

UCLASS(Blueprintable)
class R5_API UR5SubtitleManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnSubtitlesTypeChanged OnSubtitlesTypeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnSubtitlesChanged OnSubtitlesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SubtitlesClearRequest OnClearRequested;
    
    UR5SubtitleManager();

    UFUNCTION(BlueprintPure)
    static void PlaySubtitle(const UWorld* Wco, const FText& Text, float Duration, int64 Group, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    bool IsHistoryEmpty();
    
    UFUNCTION(BlueprintCallable)
    bool IsActiveEmpty();
    
    UFUNCTION(BlueprintCallable)
    FText GetHistorySubtitle();
    
    UFUNCTION(BlueprintCallable)
    FText GetActiveSubtitle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UR5SubtitleManager* Get(UObject* Wco);
    
    UFUNCTION(BlueprintCallable)
    void ClearHistorySubtitle();
    
    UFUNCTION(BlueprintCallable)
    void ClearActiveSubtitle();
    
};

