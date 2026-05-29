#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5CoopRootDocumentsCollection.generated.h"

class UR5CoopRootDocument;

UCLASS(Blueprintable)
class R5COOPPROXY_API UR5CoopRootDocumentsCollection : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FR5BLRecordId, UR5CoopRootDocument*> RecordsV1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FR5BLRecordId, UR5CoopRootDocument*> Records;
    
public:
    UR5CoopRootDocumentsCollection();

};

