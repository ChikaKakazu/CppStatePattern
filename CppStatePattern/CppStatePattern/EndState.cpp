#include "EndState.h"
#include "DxLib.h"// Ç†Ç∆Ç≈è¡Ç∑ debugóp
EndState::EndState()
{

}

EndState::~EndState()
{

}

void EndState::Execute()
{
    DrawFormatString(200, 350, GetColor(255, 255, 255), "%s", "EndState::Execute");
}

void EndState::Update()
{
    DrawFormatString(200, 375, GetColor(255, 255, 255), "%s", "EndState::Update");
}

void EndState::Exit()
{
    DrawFormatString(200, 400, GetColor(255, 255, 255), "%s", "EndState::Exit");
}