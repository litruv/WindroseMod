#include "R5N_EnvironmentParticlesSettingsComponent.h"

UR5N_EnvironmentParticlesSettingsComponent::UR5N_EnvironmentParticlesSettingsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bBiomeParticles = true;
    this->PointsNum = 0;
    this->BiomeParticlesRadiusMax = 9000.00f;
    this->BiomeParticlesRadiusMin = 3000.00f;
    this->BiomeDeltaMaxDistance = 800.00f;
    this->DefaultPosHeight = 200.00f;
    this->BiomeParticles = NULL;
    this->bFloraParticles = true;
    this->FloraParticlesRadius = 7000.00f;
    this->FloraDeltaMaxDistance = 700.00f;
    this->FloraParticles = NULL;
}


