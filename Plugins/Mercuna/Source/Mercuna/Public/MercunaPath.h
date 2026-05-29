#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "OnMercunaPathUpdatedDelegate.h"
#include "MercunaPath.generated.h"

UCLASS(Blueprintable)
class MERCUNA_API UMercunaPath : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMercunaPathUpdated PathUpdated;
    
public:
    UMercunaPath();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartial() const;
    
    UFUNCTION(BlueprintCallable)
    void Invalidate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPoint(int32 I) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPathLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPoints() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDebugInfo(int32& nodesUsed, bool& bOutOfNodes, float& queryTime) const;
    
};

