// GameEntryPoint.cpp
#include "Game.h"

// Entry point for the game
int main() {
    Game game;

    // Initialize the game
    game.Initialize();

    // Main loop (for simplicity, just update once)
    game.Update();

    // Shutdown the game
    game.Shutdown();

    return 0;
}
