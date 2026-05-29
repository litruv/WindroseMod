#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "UObject/SoftObjectPath.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5ClientAssetsPreloader.generated.h"

class UObject;

UCLASS(Blueprintable, DefaultConfig, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class R5_API UR5ClientAssetsPreloader : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AssetHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UObject*, float> PreloadedAssets;
    
public:
    UR5ClientAssetsPreloader(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPreloadAssets(const TArray<FSoftObjectPath>& Paths);
    
};

