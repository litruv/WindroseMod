#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5OnMarkerUpdateDelegate.h"
#include "R5MarkersObserver.generated.h"

class UR5MarkerModelBase;

UCLASS(Blueprintable)
class R5_API UR5MarkersObserver : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnMarkerUpdate OnMarkerAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnMarkerUpdate OnMarkerRemoved;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UR5MarkerModelBase*> Models;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* WidgetClass;
    
public:
    UR5MarkersObserver();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UR5MarkerModelBase*> GetMarkers() const;
    
};

