#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5BiomeUIData.h"
#include "R5MapControllerComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialParameterCollectionInstance;
class UR5BiomesUIData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5MapControllerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNewChunkDrawn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewBiome, const FGameplayTag&, BiomeData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewChunkDrawn OnNewChunkDrawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewBiome OnNewBiome;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FogBrushDynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollectionInstance* MPCInstance;
    
public:
    UR5MapControllerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ScheduleFogRead(const FVector& InPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastFogReadValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentBiomeTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FR5BiomeUIData GetCurrentBiomeData(const TSoftObjectPtr<UR5BiomesUIData>& BiomesData, const FGameplayTag& BiomeTag);
    
private:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPlayerFogUpdated(int32 ChunkIndex, int32 ChunkValue);
    
};

