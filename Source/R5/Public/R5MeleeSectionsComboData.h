#pragma once
#include "CoreMinimal.h"
#include "R5MeleeSectionData.h"
#include "R5MeleeSectionsComboData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5MeleeSectionsComboData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FR5MeleeSectionData> Sections;
    
    FR5MeleeSectionsComboData();
};

