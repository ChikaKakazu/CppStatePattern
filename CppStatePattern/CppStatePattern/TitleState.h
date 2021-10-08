#pragma once
#include "BaseState.h"

class TitleState : BaseState
{
public:
    TitleState();
    ~TitleState();

    void Execute() override;
    void Update() override;
    void Exit() override;
};