#include "TitleState.h"
#include "DxLib.h"// Ç†Ç∆Ç≈è¡Ç∑ debugóp
TitleState::TitleState()
{

}

TitleState::~TitleState()
{

}

void TitleState::Execute()
{
    DrawFormatString(200, 50, GetColor(255, 255, 255), "%s", "TitleState::Execute");
}

void TitleState::Update()
{
    DrawFormatString(200, 75, GetColor(255, 255, 255), "%s", "TitleState::Update");
}

void TitleState::Exit()
{
    DrawFormatString(200, 100, GetColor(255, 255, 255), "%s", "TitleState::Exit");
}