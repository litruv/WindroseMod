#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "R5MercunaVisionMesh.h"
#include "R5MercunaVision.generated.h"

UCLASS(Blueprintable, NoExport)
class R5MERCUNA_API AR5MercunaVision : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollectLandscape;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FR5MercunaVisionMesh> Meshes;
    
public:
    AR5MercunaVision(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SortByTriangles();
    
    UFUNCTION(BlueprintCallable)
    void SortByArea();
    
    UFUNCTION(BlueprintCallable)
    void ShowOneMesh();
    
    UFUNCTION(BlueprintCallable)
    void ShowGeometry();
    
    UFUNCTION(BlueprintCallable)
    void ServerCollectGeometry();
    
    UFUNCTION(BlueprintCallable)
    void PrevMesh();
    
    UFUNCTION(BlueprintCallable)
    void NextMesh();
    
    UFUNCTION(BlueprintCallable)
    void log();
    
    UFUNCTION(BlueprintCallable)
    void HideGeometry();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void CollectGeometryOnServer();
    
    UFUNCTION(BlueprintCallable)
    void ClientCollectGeometry();
    
};

