// Engine.h
#pragma once

// Include necessary libraries and headers
#include <iostream>

// Declare Engine class
class Engine {
public:
    // Constructor
    Engine();

    // Initialize function
    void Initialize();

    // Update function (called each frame)
    void Update();

    // Shutdown function
    void Shutdown();
};
