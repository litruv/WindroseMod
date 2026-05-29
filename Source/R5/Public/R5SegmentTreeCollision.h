#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "R5SegmentTreeCollision.generated.h"

class UBodySetup;
class UNavCollisionBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5SegmentTreeCollision : public UPrimitiveComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetupInstance;
    
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNavCollisionBase* NavCollision;
    
public:
    UR5SegmentTreeCollision(const FObjectInitializer& ObjectInitializer);

};

