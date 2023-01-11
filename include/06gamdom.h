#include <iostream>
using namespace std;
#pragma once
/******************************************************************************
 *  @file       06.h
 *  @version    10.01.2023
 *  @author     Dominik Gamper
 *  Website     (optional) https://instagram.com/dominik.gamper
 *
 *
 *



 ******************************************************************************/

// ============================================================================
//                           END OF FILE
// ============================================================================
bool get_06gamdom(std::string login)
{
    if (login == "06gamdom")
    {
        cout << "Name: Dominik Gamper \n";
        cout << "Alter: 16\n";
        cout << "Wohnort: Tabland\n";
        return true; 
    }
    return false; 
}