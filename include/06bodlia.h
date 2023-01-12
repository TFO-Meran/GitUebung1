
#pragma once
/******************************************************************************
 *  @file       06salfel.h
 *  @version    [Vxx.yy.zz]	
 *  @brief      [brief description of the content]
 *  @author     Felix Salcher
 *  Website     (optional) [https://... ]
 *  Support     (optional) [xxx@yyy.zzz]
 ******************************************************************************/
#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;
bool check(string benutzername)
{
    if (benutzername == "06bodlia")
    {
        cout << "name, Wohnort, geburtsdatum";
        return true;
    }
     else
     cout << "ungueltige eingabe";
     return false;
     
}
// ============================================================================
//                           END OF FILE
// ============================================================================
