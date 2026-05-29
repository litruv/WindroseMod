#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Math/Vector2D.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "EMercunaModifierVolumeShape.h"
#include "MercunaAgentType.h"
#include "MercunaUsageTypes.h"
#include "MercunaNavGridModifierVolume.generated.h"

class AMercunaNavGraph2D;
class UMercunaNavGridModifierComponent;

UCLASS(Blueprintable, NoExport)
class MERCUNA_API AMercunaNavGridModifierVolume : public AActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMercunaNavGridModifierComponent* VolumeComponent;
    
public:
    AMercunaNavGridModifierVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUsageTypes(const FMercunaUsageTypes& NewUsageTypes);
    
    UFUNCTION(BlueprintCallable)
    void SetSize(FVector Size);
    
    UFUNCTION(BlueprintCallable)
    void SetShape(EMercunaModifierVolumeShape NewShape);
    
    UFUNCTION(BlueprintCallable)
    void SetPrismVertices(const TArray<FVector2D>& NewVertices);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCostMultiplier(float NewCostMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromGrid();
    
    UFUNCTION(BlueprintCallable)
    void OverrideUsageTypes(const FMercunaAgentType& AgentType, const FMercunaUsageTypes& NewUsageTypes);
    
    UFUNCTION(BlueprintCallable)
    void OverrideCostMultiplier(const FMercunaAgentType& AgentType, float NewCostMultiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMercunaModifierVolumeShape GetShape() const;
    
    UFUNCTION(BlueprintCallable)
    void AddToGrid(AMercunaNavGraph2D* NavGrid);
    
};

