#include "R5NavigationBuilderComponentParams.h"

UR5NavigationBuilderComponentParams::UR5NavigationBuilderComponentParams() {
    this->GeometryCollisionChannel = ECC_Pawn;
    this->CellSize = 5.00f;
    this->ExtraExpand = 100.00f;
    this->bGenerateJumpLinks = true;
    this->bCutOutStationaryObstacles = false;
    this->bSubCellRasterization = false;
    this->bPreciseBoundaries = false;
    this->bHidden = true;
}


