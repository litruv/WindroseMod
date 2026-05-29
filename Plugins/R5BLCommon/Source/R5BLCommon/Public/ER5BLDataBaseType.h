#pragma once
#include "CoreMinimal.h"
#include "ER5BLDataBaseType.generated.h"

UENUM(BlueprintType)
enum class ER5BLDataBaseType : uint8 {
    InMemory,
    RocksDB,
    PostgreSQL,
};

