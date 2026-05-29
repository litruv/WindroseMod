#pragma once
#include "CoreMinimal.h"
#include "Mercuna2DQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_Mercuna2D_Navigable.generated.h"

class APawn;

UCLASS(Abstract, Blueprintable)
class MERCUNA_API UEnvQueryTest_Mercuna2D_Navigable : public UMercuna2DQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> AgentClass;
    
    UEnvQueryTest_Mercuna2D_Navigable();

};

