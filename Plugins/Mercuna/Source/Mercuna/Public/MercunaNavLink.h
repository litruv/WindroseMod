#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Math/Rotator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "EMercunaNavigationLinkDirection.h"
#include "MercunaNavigationLink.h"
#include "MercunaSupportedAgentTypes.h"
#include "MercunaUsageTypes.h"
#include "MercunaNavLink.generated.h"

class AMercunaNavGraph2D;
class APawn;

UCLASS(Blueprintable, NoExport)
class MERCUNA_API AMercunaNavLink : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMercunaNavLinkStart, APawn*, Pawn, EMercunaNavigationLinkDirection, Direction, FVector, Destination);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaNavigationLink Link;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaSupportedAgentTypes SupportedAgentTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TypeTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaNavLinkStart OnNavLinkStart;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToAllNavGrids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMercunaNavGraph2D* NavGrid;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaUsageTypes UsageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInterGridLink;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AMercunaNavGraph2D> LeftNavGrid;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AMercunaNavGraph2D> RightNavGrid;
    
public:
    AMercunaNavLink(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool NewBEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveNavLinkStart(APawn* Pawn, EMercunaNavigationLinkDirection Direction, FVector Destination);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveNavLinkEnd(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetRightTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRightRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRightPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetLeftTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetLeftRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLeftPosition() const;
    
    UFUNCTION(BlueprintCallable)
    void AddToNavGrid(AMercunaNavGraph2D* NewNavGrid);
    
    UFUNCTION(BlueprintCallable)
    void AddToAllGrids();
    
    UFUNCTION(BlueprintCallable)
    void AddBetweenNavGrids(AMercunaNavGraph2D* NewLeftNavGrid, AMercunaNavGraph2D* NewRightNavGrid);
    
};

