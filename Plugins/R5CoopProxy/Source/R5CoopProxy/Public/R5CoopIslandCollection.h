#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5CoopIslandCollection.generated.h"

class UR5CoopRootDocumentsCollection;
class UR5CoopServerDescriptionManager;

UCLASS(Blueprintable)
class UR5CoopIslandCollection : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CoopRootDocumentsCollection* RootDocumentsCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CoopServerDescriptionManager* ServerDescriptionManager;
    
public:
    UR5CoopIslandCollection();

};

