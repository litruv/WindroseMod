#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5ChannelingBeamTraceData.h"
#include "R5ChannelingBeamTraceParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ChannelingBeamTraceParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ChannelingBeamTraceData TraceData;
    
    UR5ChannelingBeamTraceParams();

};

