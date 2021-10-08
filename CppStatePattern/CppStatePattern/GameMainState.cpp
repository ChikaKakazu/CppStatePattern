#include "GameMainState.h"
#include "DxLib.h"// Ç†Ç∆Ç≈è¡Ç∑ debugóp
GameMainState::GameMainState()
{

}

GameMainState::~GameMainState()
{

}

void GameMainState::Execute()
{
    DrawFormatString(200, 200, GetColor(255, 255, 255), "%s", "GameMainState::Execute");
}

void GameMainState::Update()
{
    DrawFormatString(200, 225, GetColor(255, 255, 255), "%s", "GameMainState::Update");
}

void GameMainState::Exit()
{
    DrawFormatString(200, 250, GetColor(255, 255, 255), "%s", "GameMainState::Exit");
}