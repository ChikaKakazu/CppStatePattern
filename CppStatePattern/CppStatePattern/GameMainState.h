#pragma once
#include "BaseState.h"

class GameMainState : BaseState
{
public:
    GameMainState();
    ~GameMainState();

    void Execute() override;
    void Update() override;
    void Exit() override;
};