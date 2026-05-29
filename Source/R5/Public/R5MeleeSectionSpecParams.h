#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5SectionSpecData.h"
#include "R5MeleeSectionSpecParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5MeleeSectionSpecParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SectionSpecData SectionData;
    
    UR5MeleeSectionSpecParams();

};

