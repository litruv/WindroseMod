#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5MarkersReplicationComponent.h"
#include "Templates/SubclassOf.h"
#include "R5MarkersSystemComponent.generated.h"

class UR5MarkerModelBase;
class UR5MarkerModelUser;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5MarkersSystemComponent : public UR5MarkersReplicationComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FR5OnRequestPopup, UR5MarkerModelUser*, MarkerModel, bool, bNewMarker);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnRequestPopup OnRequestPopup;
    
    UR5MarkersSystemComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void NewMarkerCreated(UR5MarkerModelBase* Model);
    
public:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void DestroyMarkerByOwner(const FR5BLRecordId OwnerId);
    
    UFUNCTION(BlueprintCallable)
    void DestroyMarker(UR5MarkerModelBase* MarkerModel);
    
    UFUNCTION(BlueprintCallable)
    UR5MarkerModelBase* CreateMarker(const TSubclassOf<UR5MarkerModelBase>& MarkerClass, const FVector& position, FR5BLRecordId OwnerId);
    
};

