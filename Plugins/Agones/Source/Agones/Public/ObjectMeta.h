#pragma once
#include "CoreMinimal.h"
#include "ObjectMeta.generated.h"

USTRUCT(BlueprintType)
struct FObjectMeta {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Namespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Uid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResourceVersion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Generation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CreationTimestamp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 DeletionTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> Annotations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> Labels;
    
    AGONES_API FObjectMeta();
};

