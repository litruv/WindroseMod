#pragma once
#include "CoreMinimal.h"
#include "ER5EquipmentSlotType.generated.h"

UENUM(BlueprintType)
namespace ER5EquipmentSlotType {
    enum Type {
        None,
        MainHand,
        OffHand,
        Head = 4,
        Torso = 8,
        Hands = 16,
        Legs = 32,
        Boots = 64,
        Ring = 128,
        Necklace = 256,
        Insignia = 512,
        Backpack = 1024,
    };
}

