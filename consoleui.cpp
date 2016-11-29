#include <iostream>
#include <string>
#include "consoleui.h"
#include "performer.h"
using namespace std;

ConsoleUI::ConsoleUI()
{

}

void ConsoleUI::run()
{
    cout << "Please enter one of the following commands: " << endl;
    cout << "list - This will list all performers in the system" << endl;
    cout << "add - This will add a new performer" << endl;

    string command;
    cin >> command;

    if(command == "list")
    {
        displayListOfPerformer();
    }

    else if(command == "add")
    {
        string name;
        int age;
        cin >> name;
        cin >> age;
        //villutékk
        Performer newPerformer(name, age);
        bool success = _service.addPerformer(newPerformer);

       //if setning um success

    }
}

void ConsoleUI::displayListOfPerformer()
{
    vector<Performer> performers = _service.getPerformers();
    for(size_t i = 0; i < performers.size(); ++i)
    {
        cout << performers[i].getName();
    }
}
