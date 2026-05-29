#pragma once
#include "CoreMinimal.h"
#include "R5SectionMovesetData.h"
#include "R5SectionSpecData.h"
#include "R5MeleeSectionComboData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5MeleeSectionComboData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SectionMovesetData MovesetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SectionSpecData SpecParams;
    
    FR5MeleeSectionComboData();
};

