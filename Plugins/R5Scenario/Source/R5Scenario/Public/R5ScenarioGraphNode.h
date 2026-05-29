#pragma once
#include "CoreMinimal.h"
#include "R5ScenarioNode.h"
#include "R5ScenarioGraphNode.generated.h"

class AActor;

UCLASS(Blueprintable)
class R5SCENARIO_API UR5ScenarioGraphNode : public UR5ScenarioNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CPinNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OutputCPinNames;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
public:
    UR5ScenarioGraphNode();

    UFUNCTION(BlueprintCallable)
    void OnNodeCreated();
    
    UFUNCTION(BlueprintCallable)
    void LoadParametersFromString(const FString& String);
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetBlueprintProperty() const;
    
};

