#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePlaybackClient -FallbackName=MovieScenePlaybackClient
#include "IMovieScenePlaybackClient.h"
#include "PlaySequenceData.h"
#include "R5LevelSequenceComponent.generated.h"

class AActor;
class UDefaultLevelSequenceInstanceData;
class UMovieSceneBindingOverrides;
class UR5LevelSequencePlayer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5CINEMATIC_API UR5LevelSequenceComponent : public UActorComponent, public IMovieScenePlaybackClient {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UR5LevelSequencePlayer* SequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDefaultLevelSequenceInstanceData* DefaultInstanceData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SequenceData, meta=(AllowPrivateAccess=true))
    FPlaySequenceData SequenceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneBindingOverrides* BindingOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReplicatePlayback: 1;
    
public:
    UR5LevelSequenceComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopSequence();
    
    UFUNCTION(BlueprintCallable)
    void SetReplicatePlayback(bool ReplicatePlayback);
    
    UFUNCTION(BlueprintCallable)
    void SetBindingByTag(FName BindingTag, const TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetBinding(FMovieSceneObjectBindingID Binding, const TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerStopSequence();
    
    UFUNCTION(BlueprintCallable)
    void ResetBindings();
    
    UFUNCTION(BlueprintCallable)
    void ResetBinding(FMovieSceneObjectBindingID Binding);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBindingByTag(FName Tag, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBinding(FMovieSceneObjectBindingID Binding, AActor* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlaySequence(const FPlaySequenceData& InData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PauseSequence();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSequenceFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SequenceData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5LevelSequencePlayer* GetSequencePlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlaySequenceData GetPlaySequenceData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMovieSceneObjectBindingID> FindNamedBindings(FName Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMovieSceneObjectBindingID FindNamedBinding(FName Tag) const;
    
    UFUNCTION(BlueprintCallable)
    void AddBindingByTag(FName BindingTag, AActor* Actor, bool bAllowBindingsFromAsset);
    
    UFUNCTION(BlueprintCallable)
    void AddBinding(FMovieSceneObjectBindingID Binding, AActor* Actor, bool bAllowBindingsFromAsset);

    virtual bool RetrieveBindingOverrides(const FGuid& InBindingId, FMovieSceneSequenceID InSequenceID, TArray<UObject*, TInlineAllocator<1>>& OutObjects) const override;
    virtual UObject* GetInstanceData() const override;
};

