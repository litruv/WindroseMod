#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "R5WebSniffer.generated.h"

class UObject;
class UR5WebSniffer;
class UR5WebSnifferHttpClient;

UCLASS(Blueprintable)
class R5WEBSNIFFER_API UR5WebSniffer : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UR5WebSnifferHttpClient*> HttpClients;
    
public:
    UR5WebSniffer();

    UFUNCTION(BlueprintCallable)
    bool IsSiteAvailable(const FString& URL);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UR5WebSniffer* GetR5WebSniffer(const UObject* Wco);
    
};

