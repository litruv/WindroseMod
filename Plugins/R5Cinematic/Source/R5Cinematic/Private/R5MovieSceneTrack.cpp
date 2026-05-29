#include "R5MovieSceneTrack.h"
#include "Evaluation/MovieSceneEvalTemplate.h"

UR5MovieSceneTrack::UR5MovieSceneTrack() {
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->EventPosition = EFireEventsAtPosition::AfterSpawn;
}

FMovieSceneEvalTemplatePtr UR5MovieSceneTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
    return FMovieSceneEvalTemplatePtr();
}

