#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5LandscapeTestConverter.generated.h"

class ALandscape;

UCLASS(Blueprintable, NoExport)
class R5LANDSCAPERENDERER_API AR5LandscapeTestConverter : public AActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ALandscape> LandscapeToConvert;
    
public:
    AR5LandscapeTestConverter(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void LoadMaterialData();
    
    UFUNCTION(BlueprintCallable)
    void ConvertAll();
    
    UFUNCTION(BlueprintCallable)
    void Convert();
    
};

