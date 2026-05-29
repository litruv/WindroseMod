#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayStateTreeModule -ObjectName=StateTreeComponent -FallbackName=StateTreeComponent
#include "Components/StateTreeComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "R5AIStateTreeComponent.generated.h"

class UR5AIStateTreeComponentParams;
class UStateTreeSchema;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5AIStateTreeComponent : public UStateTreeComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AIStateTreeComponentParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStateTreeSchema> SchemaClass;
    
public:
    UR5AIStateTreeComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnStateChanged(FGameplayTag PrevState, FGameplayTag CurrentState);
    
};

