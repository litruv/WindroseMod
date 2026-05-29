#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5GrassPreset.generated.h"

class UR5GrassType;

UCLASS(Blueprintable)
class R5GRASSGENERATOR_API UR5GrassPreset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UR5GrassType*> GrassLayers;
    
    UR5GrassPreset();

};

