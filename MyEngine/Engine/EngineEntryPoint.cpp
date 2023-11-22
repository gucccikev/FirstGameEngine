// EngineEntryPoint.cpp
#include "Engine.h"

// Entry point for the engine
int main() {
    Engine engine;

    // Initialize the engine
    engine.Initialize();

    // Main loop (for simplicity, just update once)
    engine.Update();

    // Shutdown the engine
    engine.Shutdown();

    return 0;
}
