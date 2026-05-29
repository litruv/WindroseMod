#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "R5AN_DrawSocketRelativeLocation.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class R5_API UR5AN_DrawSocketRelativeLocation : public UAnimNotify {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
public:
    UR5AN_DrawSocketRelativeLocation();

};

