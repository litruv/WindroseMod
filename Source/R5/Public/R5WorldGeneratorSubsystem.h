#pragma once
#include "CoreMinimal.h"
#include "R5WorldSubsystem.h"
#include "R5WorldGeneratorSubsystem.generated.h"

class AR5IslandGenerator;
class UObject;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UR5WorldGeneratorSubsystem : public UR5WorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavigationBoundsLowering;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavigationBoundsElevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ArchipelagoSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AR5IslandGenerator*> IslandGenerators;
    
public:
    UR5WorldGeneratorSubsystem();

};

