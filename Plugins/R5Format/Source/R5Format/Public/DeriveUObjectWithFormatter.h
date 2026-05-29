#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "DeriveUObjectWithFormatter.generated.h"

UCLASS(Blueprintable)
class UDeriveUObjectWithFormatter : public UObject {
    GENERATED_BODY()
public:
    UDeriveUObjectWithFormatter();

};

