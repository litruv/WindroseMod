#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5AMContextLinkComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5ACTIONMANAGER_API UR5AMContextLinkComponent : public UAssetUserData {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LinkTag;
    
public:
    UR5AMContextLinkComponent();

};

