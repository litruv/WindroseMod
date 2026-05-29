#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "R5EquipmentComponentInterface.generated.h"

class UR5DefaultEquipment;
class UR5EquipmentComponent;

UINTERFACE(Blueprintable)
class R5_API UR5EquipmentComponentInterface : public UInterface {
    GENERATED_BODY()
};

class R5_API IR5EquipmentComponentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UR5EquipmentComponent* GetEquipmentComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UR5DefaultEquipment* GetDefaultEquipment() const;
    
};

