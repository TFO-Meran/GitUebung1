#include <iostream>
#include "06stefel.h"
using namespace std;

bool get_06stefel(string login)
{
    if (login == "06stefel")
    {
        cout << "Vorname: Felix\n";
        cout << "Nachname: Steck\n";
        cout << "Alter: 16\n";
        cout << "Wohnort: Tschengls\n";
        return true;
    }
    return false;
}
