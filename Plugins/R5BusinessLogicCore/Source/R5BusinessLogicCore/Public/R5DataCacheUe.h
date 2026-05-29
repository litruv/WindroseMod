#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "R5DataCacheUe.generated.h"

UCLASS(Blueprintable)
class R5BUSINESSLOGICCORE_API UR5DataCacheUe : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ObjectPathsToReload;
    
public:
    UR5DataCacheUe();

};

