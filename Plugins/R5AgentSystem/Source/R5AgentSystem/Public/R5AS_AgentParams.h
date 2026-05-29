#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5AS_MemoryAssetProviderInterface.h"
#include "R5AS_AgentParams.generated.h"

class UR5AS_AgentCollector_Base;
class UR5AS_Categorizer_Base;
class UR5AS_MemoryPackageParams;
class UR5AS_TargetSelector_Base;

UCLASS(Blueprintable)
class R5AGENTSYSTEM_API UR5AS_AgentParams : public UDataAsset, public IR5AS_MemoryAssetProviderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5AS_MemoryPackageParams*> Packages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollectionTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AgentTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5AS_AgentCollector_Base*> AgentCollectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5AS_Categorizer_Base*> Categorizers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AS_TargetSelector_Base* TargetSelector;
    
    UR5AS_AgentParams();


    // Fix for true pure virtual functions not being implemented
};

