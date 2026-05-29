#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5RequirementContext.h"
#include "R5Requirement.generated.h"

class UR5Requirement;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class R5REQUIREMENT_API UR5Requirement : public UObject {
    GENERATED_BODY()
public:
    UR5Requirement();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRequirementDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UR5Requirement*> GetChildrenRequirements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckRequirementIsMet(const FR5RequirementContext& Context) const;
    
    UFUNCTION(BlueprintCallable)
    static bool CheckAllRequirements(const TArray<UR5Requirement*>& Requirements, const FR5RequirementContext& Context);
    
};

