#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AttributeSet -FallbackName=AttributeSet
#include "AttributeSet.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttributeData -FallbackName=GameplayAttributeData
#include "R5ComfortAttributeSet.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ComfortAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Comfort, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Comfort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxComfort, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxComfort;
    
    UR5ComfortAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_MaxComfort(const FGameplayAttributeData& OldMaxComfort);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Comfort(const FGameplayAttributeData& OldComfort);
    
};

