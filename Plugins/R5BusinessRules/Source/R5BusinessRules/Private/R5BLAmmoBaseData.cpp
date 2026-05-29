#include "R5BLAmmoBaseData.h"

FR5BLAmmoBaseData::FR5BLAmmoBaseData() {
    this->BaseDamageGEClass = NULL;
    this->DamageModifier = 0.00f;
    this->ArmorPenetrationAdd = 0.00f;
    this->ArmorPenetrationDepth = 0.00f;
    this->CritDamageModifier = 0.00f;
    this->ProjectilesNum = 0;
    this->DelayToShoot = 0.00f;
    this->SpeedModifier = 0.00f;
    this->GravityScale = 0.00f;
    this->ScatterModifier = 0.00f;
    this->FallOffModifier = 0.00f;
    this->AdditionalStaggerPower = 0;
    this->DecreasePowerPerPenetration = 0.00f;
    this->bCanPenetrateNotArmoredTargets = false;
    this->ProjectileTrailClass = NULL;
}

