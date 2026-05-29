#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
#include "Templates/SubclassOf.h"
#include "R5MarkerComponent.generated.h"

class UR5MarkerModelBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5MarkerComponent : public USceneComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5MarkerModelBase* MarkerModelInstance;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MarkerModelBase* MarkerModel;
    
public:
    UR5MarkerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void GetModel(TSubclassOf<UR5MarkerModelBase> ModelClass, UR5MarkerModelBase*& OutModel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5MarkerModelBase* GetMarkerModel() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyMarkerComponent();
    
    UFUNCTION(BlueprintCallable)
    void CreateMarker(TSubclassOf<UR5MarkerModelBase> ModelClass);
    
};

