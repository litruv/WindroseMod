#pragma once
#include "CoreMinimal.h"
#include "R5TargetDataPreview.h"
#include "R5TargetDataPreview_Decal.generated.h"

class UDecalComponent;

UCLASS(Blueprintable, NoExport)
class R5GAS_API AR5TargetDataPreview_Decal : public AR5TargetDataPreview {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* DecalComponent;
    
public:
    AR5TargetDataPreview_Decal(const FObjectInitializer& ObjectInitializer);

};

