#pragma once
#include "CoreMinimal.h"
#include "R5MarkerDiscoverData.h"
#include "R5MarkerModelBase.h"
#include "R5MarkerModelDiscover.generated.h"

UCLASS(Blueprintable, EditInlineNew, HideDropdown)
class UR5MarkerModelDiscover : public UR5MarkerModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FR5MarkerDiscoverData DiscoverData;
    
    UR5MarkerModelDiscover();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetDiscoverData(const FR5MarkerDiscoverData& Data);
    
};

