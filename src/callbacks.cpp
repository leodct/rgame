#include "callbacks.hpp"

void ExitCallback()
{
    closeGame = true;
}

void DefaultCallback()
{
    std::cout << "Default button callback!" << std::endl;
}
