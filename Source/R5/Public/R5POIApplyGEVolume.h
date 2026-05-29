#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=ActiveGameplayEffectHandle -FallbackName=ActiveGameplayEffectHandle
#include "ActiveGameplayEffectHandle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5PointOfInterest -ObjectName=R5POIVolume -FallbackName=R5POIVolume
#include "R5POIVolume.h"
#include "Templates/SubclassOf.h"
#include "R5POIApplyGEVolume.generated.h"

class AActor;
class UGameplayEffect;

UCLASS(Blueprintable, NoExport)
class R5_API AR5POIApplyGEVolume : public AR5POIVolume {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GEClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FActiveGameplayEffectHandle> ActorToEffectHandles;
    
public:
    AR5POIApplyGEVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

