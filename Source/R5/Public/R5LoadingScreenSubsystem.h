#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "Templates/SubclassOf.h"
#include "R5LoadingScreenSubsystem.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class R5_API UR5LoadingScreenSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnContentWidgetChanged, TSubclassOf<UUserWidget>, NewWidgetClass);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangedStatus, const FString&, NewStatus);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContentWidgetChanged OnContentWidgetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangedStatus OnChangedStatus;
    
    UR5LoadingScreenSubsystem();

    UFUNCTION(BlueprintCallable)
    static void FlashTaskbarIcon();
    
};

