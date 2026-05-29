#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5ObjectInspectorAssetData.h"
#include "R5ObjectInspector_AssetSoftPath.h"
#include "R5ObjectInspectorAssetsCache.generated.h"

class UR5ObjectInspectorAssetsCache;

UCLASS(Blueprintable, Config=Game)
class R5_API UR5ObjectInspectorAssetsCache : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5ObjectInspectorAssetsCache> CachePath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCacheInEditorBuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FR5ObjectInspector_AssetSoftPath, FR5ObjectInspectorAssetData> Assets;
    
    UR5ObjectInspectorAssetsCache();

};

