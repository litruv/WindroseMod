#include "R5LevelSequenceComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=DefaultLevelSequenceInstanceData -FallbackName=DefaultLevelSequenceInstanceData
#include "DefaultLevelSequenceInstanceData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBindingOverrides -FallbackName=MovieSceneBindingOverrides
#include "MovieSceneBindingOverrides.h"
#include "Net/UnrealNetwork.h"
#include "R5LevelSequencePlayer.h"

UR5LevelSequenceComponent::UR5LevelSequenceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicateUsingRegisteredSubObjectList = true;
    this->SequencePlayer = CreateDefaultSubobject<UR5LevelSequencePlayer>(TEXT("SequencePlayer"));
    this->DefaultInstanceData = CreateDefaultSubobject<UDefaultLevelSequenceInstanceData>(TEXT("InstanceData"));
    this->BindingOverrides = CreateDefaultSubobject<UMovieSceneBindingOverrides>(TEXT("BindingOverrides"));
    this->bReplicatePlayback = false;
}

void UR5LevelSequenceComponent::StopSequence() {
}

void UR5LevelSequenceComponent::SetReplicatePlayback(bool ReplicatePlayback) {
}

void UR5LevelSequenceComponent::SetBindingByTag(FName BindingTag, const TArray<AActor*>& Actors, bool bAllowBindingsFromAsset) {
}

void UR5LevelSequenceComponent::SetBinding(FMovieSceneObjectBindingID Binding, const TArray<AActor*>& Actors, bool bAllowBindingsFromAsset) {
}

void UR5LevelSequenceComponent::ServerStopSequence_Implementation() {
}

void UR5LevelSequenceComponent::ResetBindings() {
}

void UR5LevelSequenceComponent::ResetBinding(FMovieSceneObjectBindingID Binding) {
}

void UR5LevelSequenceComponent::RemoveBindingByTag(FName Tag, AActor* Actor) {
}

void UR5LevelSequenceComponent::RemoveBinding(FMovieSceneObjectBindingID Binding, AActor* Actor) {
}

void UR5LevelSequenceComponent::PlaySequence(const FPlaySequenceData& InData) {
}

void UR5LevelSequenceComponent::PauseSequence() {
}

void UR5LevelSequenceComponent::OnSequenceFinished() {
}

void UR5LevelSequenceComponent::OnRep_SequenceData() {
}

UR5LevelSequencePlayer* UR5LevelSequenceComponent::GetSequencePlayer() const {
    return NULL;
}

FPlaySequenceData UR5LevelSequenceComponent::GetPlaySequenceData() const {
    return FPlaySequenceData{};
}

TArray<FMovieSceneObjectBindingID> UR5LevelSequenceComponent::FindNamedBindings(FName Tag) const {
    return TArray<FMovieSceneObjectBindingID>();
}

FMovieSceneObjectBindingID UR5LevelSequenceComponent::FindNamedBinding(FName Tag) const {
    return FMovieSceneObjectBindingID{};
}

void UR5LevelSequenceComponent::AddBindingByTag(FName BindingTag, AActor* Actor, bool bAllowBindingsFromAsset) {
}

void UR5LevelSequenceComponent::AddBinding(FMovieSceneObjectBindingID Binding, AActor* Actor, bool bAllowBindingsFromAsset) {
}

void UR5LevelSequenceComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5LevelSequenceComponent, SequencePlayer);
    DOREPLIFETIME(UR5LevelSequenceComponent, SequenceData);
}

bool UR5LevelSequenceComponent::RetrieveBindingOverrides(const FGuid& InBindingId, FMovieSceneSequenceID InSequenceID, TArray<UObject*, TInlineAllocator<1>>& OutObjects) const
{
    return false;
}

UObject* UR5LevelSequenceComponent::GetInstanceData() const
{
    return DefaultInstanceData;
}


