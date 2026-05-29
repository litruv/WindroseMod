#pragma once
#include "CoreMinimal.h"
#include "ER5N_Unit.generated.h"

UENUM(BlueprintType)
enum class ER5N_Unit : uint8 {
    Length_cm,
    Length_m,
    Length_km,
    Length_ft,
    Length_in,
    Length_mi,
    Square_cm2,
    Square_m2,
    Square_km2,
    Angle_deg,
    Angle_rad,
    Mass_g,
    Mass_kg,
    Mass_t,
    Density_kg_cm3,
    Density_kg_m3,
    Speed_cm_s,
    Speed_m_s,
    Speed_km_s,
    Speed_km_h,
    Speed_knot,
    Speed_mph,
    Speed_ft_s,
    Force_cN,
    Force_N,
    Force_kN,
    Force_kgf,
    Force_tf,
    Force_ktf,
    Undefined,
};

