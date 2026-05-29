#include "EnvironmentQuery/Tests/EnvQueryTest_Project.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

#if UE_EDITOR
// UnrealEditor-R5.dll only: AIModule is a separate DLL and these symbols are not re-exported.
// Monolithic R5.exe links AIModule directly; defining them here causes LNK2005.
void UEnvQueryTest_Project::RunTest(FEnvQueryInstance& QueryInstance) const
{
    Super::RunTest(QueryInstance);
}

FText UEnvQueryTest_Project::GetDescriptionDetails() const
{
    return Super::GetDescriptionDetails();
}
#endif
