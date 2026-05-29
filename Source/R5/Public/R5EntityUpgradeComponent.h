#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordPath -FallbackName=R5BLRecordPath
#include "R5BLRecordPath.h"
#include "R5EntityUpgradeComponent.generated.h"

class AActor;
class APlayerState;
class UNiagaraComponent;
class UR5BLActor_BuildingBlockView;
class UR5BLRecipeData;
class UR5EntityUpgradeParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5EntityUpgradeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUpgradeComplete);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSpawnActor, AActor*, SpawnedActor, APlayerState*, Instigator);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLevelUpdate, int32, NewLevel);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLevelUpdate OnLevelUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpgradeComplete OnUpgradeComplete;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5EntityUpgradeParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Level, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SpawnedFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLActor_BuildingBlockView* BuildingBlockView;
    
public:
    UR5EntityUpgradeComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Level();
    
    UFUNCTION(BlueprintCallable)
    void OnBuildingBlockUpdated(const FR5BLRecordPath& ViewPath);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5EntityUpgradeParams* GetParams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UR5BLRecipeData> GetActualRecipe() const;
    
};

