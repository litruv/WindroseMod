#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5ContextualSpawnerWorldSettingsComponent.generated.h"

class UR5ContextualSpawnerList;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ContextualSpawnerWorldSettingsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5ContextualSpawnerList> ContextualSpawnerList;
    
    UR5ContextualSpawnerWorldSettingsComponent(const FObjectInitializer& ObjectInitializer);

};

