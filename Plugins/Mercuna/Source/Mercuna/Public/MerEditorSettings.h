#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "MerGridEditorSettings.h"
#include "MerOctreeEditorSettings.h"
#include "MerEditorSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class MERCUNA_API UMerEditorSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableExtraLogging;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlushMercunaLogFileOnWrite;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMerOctreeEditorSettings OctreeEditorSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMerGridEditorSettings GridEditorSettings;
    
    UMerEditorSettings();

};

