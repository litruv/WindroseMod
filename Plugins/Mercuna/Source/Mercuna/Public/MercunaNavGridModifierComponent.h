#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Math/Vector2D.h"
#include "EMercunaModifierVolumeShape.h"
#include "MercunaAgentType.h"
#include "MercunaModifier.h"
#include "MercunaNavModifierComponent.h"
#include "MercunaUsageTypes.h"
#include "MercunaNavGridModifierComponent.generated.h"

class AMercunaNavGraph2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA_API UMercunaNavGridModifierComponent : public UMercunaNavModifierComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AMercunaNavGraph2D> NavGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMercunaModifierVolumeShape Shape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> PrismVertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMercunaAgentType, FMercunaModifier> PerAgentTypeModifiers;
    
public:
    UMercunaNavGridModifierComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetShape(EMercunaModifierVolumeShape NewShape);
    
    UFUNCTION(BlueprintCallable)
    void SetPrismVertices(const TArray<FVector2D>& NewVertices);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromGrid();
    
    UFUNCTION(BlueprintCallable)
    void OverrideUsageTypes(const FMercunaAgentType& AgentType, const FMercunaUsageTypes& NewUsageTypes);
    
    UFUNCTION(BlueprintCallable)
    void OverrideCostMultiplier(const FMercunaAgentType& AgentType, float NewCostMultiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMercunaModifierVolumeShape GetShape() const;
    
    UFUNCTION(BlueprintCallable)
    void AddToGrid(AMercunaNavGraph2D* NewNavGrid);
    
};

