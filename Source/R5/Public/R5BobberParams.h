#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5BobberData.h"
#include "R5BobberParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5BobberParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BobberData Data;
    
    UR5BobberParams();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCatchSocket(FGameplayTag ItemTypeTag) const;
    
};

