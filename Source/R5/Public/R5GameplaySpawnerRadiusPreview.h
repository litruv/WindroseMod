#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "R5GameplaySpawnerRadiusPreview.generated.h"

class UR5GameplaySpawnerParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5GameplaySpawnerRadiusPreview : public UPrimitiveComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5GameplaySpawnerParams> SpawnerParams;
    
public:
    UR5GameplaySpawnerRadiusPreview(const FObjectInitializer& ObjectInitializer);

};

