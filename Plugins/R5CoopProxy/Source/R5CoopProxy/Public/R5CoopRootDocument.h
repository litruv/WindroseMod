#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5CoopRootDocument.generated.h"

class UR5CoopRootDocumentBackup;

UCLASS(Blueprintable)
class UR5CoopRootDocument : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CoopRootDocumentBackup* Backup;
    
public:
    UR5CoopRootDocument();

};

