#include "R5NPhys_ModelSettings_Debug.h"

FR5NPhys_ModelSettings_Debug::FR5NPhys_ModelSettings_Debug() {
    this->DrawForces = false;
    this->ForceScale = 0.00f;
    this->ForceLineThickness = 0.00f;
    this->DrawAccelerations = false;
    this->AccelerationsScale = 0.00f;
    this->RotationAccelerationScale = 0.00f;
    this->AccelerationLineThickness = 0.00f;
    this->DrawBodies = false;
    this->BodyLineThickness = 0.00f;
    this->BodyDepthPriorityGroup = 0;
    this->bDrawRootComponentBodies = false;
    this->DrawWaterLevel = false;
    this->WaterLevelSide = 0.00f;
    this->WaterLevelStep = 0.00f;
    this->UseDebugControl = false;
    this->RudderAngle = 0.00f;
    this->MotorGear = 0;
    this->IsWindVelocityLocalToModel = false;
    this->PayloadMass = 0.00f;
    this->DrawSensors = false;
    this->SensorScale = 0.00f;
    this->SensorLineThickness = 0.00f;
    this->SensorSphereThickness = 0.00f;
    this->bOnlyFirstSubtickGraph = false;
}

