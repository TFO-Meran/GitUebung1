#pragma once
#include <iostream>

using namespace std;

/**
 *  @file       06poeluk.h
 *  @version    [Vxx.yy.zz]
 *  @brief      [brief description of the content]
 *  @author     Lukas Pöll
 *  Website     (optional) [https://... ]
 *  Support     (optional) [xxx@yyy.zzz]
 **/

bool get_06poeluk(string login)
{

    if (login == "06poeluk")
    {
        cout << "Name: Lukas; Nachname: Poell; Alter: 16; Wohnort: Platt; ";
        return true;
    }

    else

    {
        return false;
    }
}