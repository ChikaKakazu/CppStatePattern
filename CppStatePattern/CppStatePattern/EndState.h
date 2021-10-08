#pragma once
#include "BaseState.h"

class EndState : BaseState
{
public:
    EndState();
    ~EndState();

    void Execute() override;
    void Update() override;
    void Exit() override;
};