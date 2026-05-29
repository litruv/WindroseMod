#pragma once
#include "CoreMinimal.h"
#include "R5POIElementSpawner.h"
#include "R5POIElementSpawner_StaticMesh.generated.h"

class UStaticMesh;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5POI_API UR5POIElementSpawner_StaticMesh : public UR5POIElementSpawner {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> Mesh;
    
public:
    UR5POIElementSpawner_StaticMesh();

};

