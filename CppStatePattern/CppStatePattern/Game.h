#pragma once
#include "StateProcessor.h"
#include "StateType.h"

class Game
{
public:
    Game();
    ~Game();

    bool Initialize();
    void RunLoop();
    void UpdateGame();
    void Shutdown();
    void ProcessInput();

    void InitializeStateToRegister();

    class StateProcessor<StateType>* stateProcessor;
private:
    const int const WIN_WIDTH = 960;
    const int const WIN_HEIGHT = 540;
    const char* const TITLE = "CppStatePattern";
    bool isRunning;

    class TitleState* titleState;
    class GameMainState* gameMainState;
    class EndState* endState;
};