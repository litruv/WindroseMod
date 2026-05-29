#pragma once
#include "CoreMinimal.h"
#include "R5CPDVectorParam.h"
#include "R5MaterialParameterInfo.h"
#include "R5ScalarParamData.h"
#include "R5BuildingCustomData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FR5BuildingCustomData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5MaterialParameterInfo> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FR5CPDVectorParam> VectorParameterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FR5ScalarParamData> ScalarParameterData;
    
    R5_API FR5BuildingCustomData();
};

