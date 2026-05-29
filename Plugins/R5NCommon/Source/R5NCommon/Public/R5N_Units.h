#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "ER5N_Unit.h"
#include "ER5N_UnitType.h"
#include "R5N_UnitDescription.h"
#include "R5N_Units.generated.h"

UCLASS(Blueprintable)
class R5NCOMMON_API UR5N_Units : public UObject {
    GENERATED_BODY()
public:
    UR5N_Units();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ER5N_UnitType GetUnitType(ER5N_Unit Unit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FR5N_UnitDescription GetUnitDescription(ER5N_Unit Unit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGravityConst();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ER5N_Unit GetDefaultUnitForUnitType(ER5N_UnitType UnitType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ConvertUnitToUnit(float Value, ER5N_Unit FromUnit, ER5N_Unit ToUnit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ConvertUnitToDefault(float Value, ER5N_Unit Unit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ConvertDefaultToUnit(float DefaultValue, ER5N_Unit ToUnit);
    
};

