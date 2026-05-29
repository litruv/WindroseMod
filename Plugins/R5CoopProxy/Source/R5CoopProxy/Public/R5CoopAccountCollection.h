#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5CoopAccountCollection.generated.h"

class UR5CoopPlayerCollection;
class UR5CoopRootDocument;
class UR5CoopRootDocumentsCollection;

UCLASS(Blueprintable)
class UR5CoopAccountCollection : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CoopRootDocumentsCollection* RootDocumentsCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CoopRootDocument* CurrentAccountDocument;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CoopPlayerCollection* PlayerCollection;
    
public:
    UR5CoopAccountCollection();

};

