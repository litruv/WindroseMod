#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5LandscapeRenderer -ObjectName=LandscapeExtractedData -FallbackName=LandscapeExtractedData
#include "LandscapeExtractedData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5TerrainGeneratorCommon -ObjectName=R5TerrainPatchInterface -FallbackName=R5TerrainPatchInterface
#include "R5TerrainPatchInterface.h"
#include "R5PointOfInterest.generated.h"

class UR5POISchemeNode;
class UR5ScenarioSettings;

UCLASS(Blueprintable)
class R5POINTOFINTEREST_API UR5PointOfInterest : public UObject, public IR5TerrainPatchInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLandscapeExtractedData LandscapeExtractedData;
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UR5ScenarioSettings>> Scenarios;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UR5ScenarioSettings>> LocalScenarios;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaActivityCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaActivationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideSupportedAgentTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SupportedAgentTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubCellRasterization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5POISchemeNode* SchemeNodeTreeRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAreaActivationSettings;
    
public:
    UR5PointOfInterest();


    // Fix for true pure virtual functions not being implemented
};

