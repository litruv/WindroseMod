#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "EMercunaNavigationExclusionType.h"
#include "MercunaNavExclusionVolume.generated.h"

class AMercunaNavGraph;
class UMercunaVolumeComponent;

UCLASS(Blueprintable, NoExport)
class MERCUNA_API AMercunaNavExclusionVolume : public AActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMercunaVolumeComponent* VolumeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToAllNavGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMercunaNavGraph* NavGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMercunaNavigationExclusionType ExclusionType;
    
public:
    AMercunaNavExclusionVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSize(FVector Size);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromGraphs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSize() const;
    
    UFUNCTION(BlueprintCallable)
    void AddToGraph(AMercunaNavGraph* NewNavGraph);
    
    UFUNCTION(BlueprintCallable)
    void AddToAllGraphs();
    
};

