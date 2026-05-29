#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EPixelFormat -FallbackName=EPixelFormat
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "R5TextureConverter.generated.h"

class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class UR5TextureConverter : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UR5TextureConverter();

    UFUNCTION(BlueprintCallable)
    static void Texture2DToBinaryString(const UTexture2D* Texture, FString& BinaryString);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* RestoreTexture2DWithBinaryString(int32 SizeX, int32 SizeY, uint8 SRGB, TEnumAsByte<EPixelFormat> PixelFormat, const FString& BinaryString);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* RenderTargetTextureToTexture2D(UTextureRenderTarget2D* TextureRenderTarget);
    
};

