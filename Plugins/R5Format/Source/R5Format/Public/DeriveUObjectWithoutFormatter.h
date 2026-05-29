#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "DeriveUObjectWithoutFormatter.generated.h"

UCLASS(Blueprintable)
class UDeriveUObjectWithoutFormatter : public UObject {
    GENERATED_BODY()
public:
    UDeriveUObjectWithoutFormatter();

};

