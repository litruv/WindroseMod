#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Mercuna -ObjectName=R5NavigationBuilderComponent -FallbackName=R5NavigationBuilderComponent
#include "R5NavigationBuilderComponent.h"
#include "ER5SignificanceLevel.h"
#include "R5NavigationCustomMeshData.h"
#include "R5SignificanceInterface.h"
#include "R5ShipNavigationBuilderComponent.generated.h"

class APawn;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ShipNavigationBuilderComponent : public UR5NavigationBuilderComponent, public IR5SignificanceInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel BuildNavigationSignificanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5NavigationCustomMeshData> CustomMeshAssetArray;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> RelevantComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> CustomMeshComponentArray;
    
public:
    UR5ShipNavigationBuilderComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPassengerRemoved(APawn* PassengerPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnPassengerAdded(APawn* PassengerPawn);
    

    // Fix for true pure virtual functions not being implemented
};

