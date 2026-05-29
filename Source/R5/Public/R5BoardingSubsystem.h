#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "R5WorldSubsystem.h"
#include "R5BoardingSubsystem.generated.h"

class AActor;
class AR5BoardingBattleNew;

UCLASS(Blueprintable)
class R5_API UR5BoardingSubsystem : public UR5WorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AR5BoardingBattleNew*> BattlesArray;
    
public:
    UR5BoardingSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnBoardingBattleEndPlay(AActor* BoardingBattle, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

