#pragma once
#include "CoreMinimal.h"
#include "R5ObjectInspector_AssetSoftPath.generated.h"

USTRUCT(BlueprintType)
struct FR5ObjectInspector_AssetSoftPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssetName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FUtf8String SubPathString;
    
    R5_API FR5ObjectInspector_AssetSoftPath();
};
FORCEINLINE uint32 GetTypeHash(const FR5ObjectInspector_AssetSoftPath) { return 0; }

