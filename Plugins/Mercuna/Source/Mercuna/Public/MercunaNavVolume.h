#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Math/Rotator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "MercunaNavVolume.generated.h"

class AMercunaNavGraph;
class UMercunaVolumeComponent;

UCLASS(Abstract, Blueprintable, NoExport)
class MERCUNA_API AMercunaNavVolume : public AActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMercunaVolumeComponent* VolumeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreciseBoundaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    AMercunaNavGraph* NavGraphPtr;
    
public:
    AMercunaNavVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSize(FVector Size);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRotation(const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSize() const;
    
};

