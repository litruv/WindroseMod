#include "R5N_SmokeSettingsSolver.h"

FR5N_SmokeSettingsSolver::FR5N_SmokeSettingsSolver() {
    this->GameLogicParticleRadius = 0.00f;
    this->ObstacleParticleRadius = 0.00f;
    this->SimParticleRadius = 0.00f;
    this->WindInfluenceCoef = 0.00f;
    this->AmbientTemperature = 0.00f;
    this->ThermalBuoyancy = 0.00f;
    this->MaxParticles = 0;
    this->SmokeSolverType = ER5N_SmokeSolverType::SPH;
}

