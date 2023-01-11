#include <iostream>
#include <windows.h>
#include "06gamdom.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    bool user = false;

    do
    {
        string login; 
        cout << "Gib deinen Login ein: ";
        cin >> login;
        user = get_06gamdom(login); 
    } while (!user);
    
}
