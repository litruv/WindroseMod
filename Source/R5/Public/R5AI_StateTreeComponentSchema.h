#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayStateTreeModule -ObjectName=StateTreeComponentSchema -FallbackName=StateTreeComponentSchema
#include "Components/StateTreeComponentSchema.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_MemoryAssetProviderInterface -FallbackName=R5AS_MemoryAssetProviderInterface
#include "R5AS_MemoryAssetProviderInterface.h"
#include "R5AI_StateTreeComponentSchema.generated.h"

class UR5AS_MemoryPackageParams;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UR5AI_StateTreeComponentSchema : public UStateTreeComponentSchema, public IR5AS_MemoryAssetProviderInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5AS_MemoryPackageParams*> Packages;
    
public:
    UR5AI_StateTreeComponentSchema();


    // Fix for true pure virtual functions not being implemented
};

