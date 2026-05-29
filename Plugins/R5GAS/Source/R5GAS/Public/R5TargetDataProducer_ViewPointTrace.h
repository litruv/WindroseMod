#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CollisionProfileName -FallbackName=CollisionProfileName
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5CollisionShape -FallbackName=R5CollisionShape
#include "R5CollisionShape.h"
#include "R5TargetDataProducer.h"
#include "Templates/SubclassOf.h"
#include "R5TargetDataProducer_ViewPointTrace.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class R5GAS_API UR5TargetDataProducer_ViewPointTrace : public UR5TargetDataProducer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncreaseTraceDistanceByDistanceToAvatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreAvatarInTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName TraceProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CollisionShape TraceShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> AllowedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UPrimitiveComponent>> AllowedComponents;
    
    UR5TargetDataProducer_ViewPointTrace();

};

