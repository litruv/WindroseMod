#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5RelationshipSettings.generated.h"

class UR5FactionsRelationshipParams;
class UR5RelationshipCommonParams;

UCLASS(Blueprintable, DefaultConfig, Config=R5RelationshipSettings)
class R5RELATIONSHIP_API UR5RelationshipSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5RelationshipCommonParams> RelationshipCommonParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5FactionsRelationshipParams> FactionsParams;
    
public:
    UR5RelationshipSettings();

};

