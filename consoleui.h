#ifndef CONSOLEUI_H
#define CONSOLEUI_H
#include "performerservice.h"

class ConsoleUI
{
public:

    ConsoleUI();
    void run();

private:

    void displayListOfPerformer();

private:

    PerformerService _service;
};

#endif // CONSOLEUI_H
