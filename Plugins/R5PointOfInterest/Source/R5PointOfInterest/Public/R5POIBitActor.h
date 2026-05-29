#pragma once
#include "CoreMinimal.h"
#include "R5POIBit.h"
#include "R5POIBitActor.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class R5POINTOFINTEREST_API UR5POIBitActor : public UR5POIBit {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> Class;
    
public:
    UR5POIBitActor();

private:
    UFUNCTION(BlueprintCallable)
    TArray<UClass*> GetDisallowedActorClasses() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UClass*> GetAllowedActorClasses() const;
    
};

