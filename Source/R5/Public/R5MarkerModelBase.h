#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=Optional_Float -FallbackName=Optional_Float
#include "Optional_Float.h"
#include "R5MapVisibilityData.h"
#include "R5MiniMapVisibilityData.h"
#include "R5ReplicatedObject.h"
#include "R5TagsVisibilityData.h"
#include "R5WorldVisibilityData.h"
#include "R5MarkerModelBase.generated.h"

class IR5MarkersHandlerInterface;
class UR5MarkersHandlerInterface;
class UR5MarkerWidget;
class USceneComponent;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5MarkerModelBase : public UR5ReplicatedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText ShownName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FOptional_Float OptionalWorldSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MarkerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FR5WorldVisibilityData WorldVisibilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FR5MapVisibilityData MapVisibilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FR5MiniMapVisibilityData MiniMapVisibilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FR5TagsVisibilityData TagsVisibilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TScriptInterface<IR5MarkersHandlerInterface> HandlerInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFastTravel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGuid MarkerGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> OwnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bSnappingAllowed;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UR5MarkerWidget>> WidgetsClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5MarkerWidget*> Widgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float RotationAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FR5BLRecordId OwnerId;
    
public:
    UR5MarkerModelBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    void SetSnappingAllowed(bool bAllow);
    
    UFUNCTION(BlueprintCallable)
    void SetShownName(const FText& Name);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMarker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSnappingAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UR5MarkerWidget*> GetWidgets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCreated();
    
};

