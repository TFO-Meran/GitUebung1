#include <iostream>
#pragma once
/******************************************************************************
 *  @file       06salfel.h
 *  @version    [Vxx.yy.zz]	
 *  @brief      Taschenrechner
 *  @author     Felix Salcher
 *  Website     (optional) [https://... ]
 *  Support     (optional) [xxx@yyy.zzz]
 ******************************************************************************/

// ============================================================================
//                           END OF FILE
// ============================================================================

using namespace std; 

bool get_06salfel(string login) {
    if (login == "06salfel") {
        cout << "Name: Felix Salcher" << endl; 
        cout << "Alter: 16" << endl; 
        cout << "Wohnort: Meran" << endl;
        return true;
    }
    else {
        false;
    }
}