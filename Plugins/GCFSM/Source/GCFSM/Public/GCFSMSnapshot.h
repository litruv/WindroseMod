#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "GCFSMSnapshotData.h"
#include "GCFSMSnapshot.generated.h"

class UGCFSMSnapshot;

UCLASS(Blueprintable)
class GCFSM_API UGCFSMSnapshot : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGCFSMSnapshotData> fsmData;
    
public:
    UGCFSMSnapshot();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ToString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGCFSMSnapshot* FromString(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    static bool AreSnapshotsEqual(const UGCFSMSnapshot* snapshot1, const UGCFSMSnapshot* snapshot2);
    
};

