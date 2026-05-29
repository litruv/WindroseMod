#include "R5CommonFunctionLibrary.h"

bool UR5CommonFunctionLibrary::IsDevOfflineEnabled()
{
    return false;
}

int32 UR5CommonFunctionLibrary::GetTransformBasedIndex(FTransform Transform, int32 NumElements)
{
    return 0;
}

bool UR5CommonFunctionLibrary::IsDevOnlineEnabled()
{
    return false;
}

void UR5CommonFunctionLibrary::CopyToClipboard(const FString& String)
{
}

UR5CommonFunctionLibrary::UR5CommonFunctionLibrary()
{
}
