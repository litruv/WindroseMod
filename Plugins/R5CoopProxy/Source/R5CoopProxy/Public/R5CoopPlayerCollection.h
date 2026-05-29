#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5CoopPlayerCollection.generated.h"

class UR5CoopRootDocumentsCollection;

UCLASS(Blueprintable)
class UR5CoopPlayerCollection : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CoopRootDocumentsCollection* RootDocumentsCollection;
    
public:
    UR5CoopPlayerCollection();

};

