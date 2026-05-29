#pragma once
#include "CoreMinimal.h"
#include "R5CheckDefaults.h"
#include "R5EnsureDefaults.h"
#include "R5LogDefaults.h"
#include "R5LogSettingsData.generated.h"

USTRUCT(BlueprintType)
struct FR5LogSettingsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5LogDefaults LogDefaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CheckDefaults R5CheckDefaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5EnsureDefaults R5EnsureDefaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5EnsureDefaults R5ErrorDefaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 R5CheckMonitorReportDelayS;
    
    R5COMMONUTILS_API FR5LogSettingsData();
};

