#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5NavigationBuilderComponent.generated.h"

class AActor;
class AR5MercunaNavGridVolume;
class AR5MercunaNavGroundGrid;
class UR5NavigationBuilderComponentParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5MERCUNA_API UR5NavigationBuilderComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AR5MercunaNavGridVolume*> NavigationVolumesArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5MercunaNavGroundGrid* NavigationGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NavigationBuilderComponentParams* NavBuilderParams;
    
public:
    UR5NavigationBuilderComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnMercunaNavigationRebuildComplete(const AActor* Volume, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnMercunaNavigationBuildComplete(bool bSuccess);
    
};

