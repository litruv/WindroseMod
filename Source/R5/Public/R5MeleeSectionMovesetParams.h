#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5SectionMovesetData.h"
#include "R5MeleeSectionMovesetParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5MeleeSectionMovesetParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SectionMovesetData SectionData;
    
    UR5MeleeSectionMovesetParams();

};

