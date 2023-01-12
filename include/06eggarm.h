
#pragma once
using namespace std;
/******************************************************************************
 *  @file       06eggarm.h
 *  @version    [Vxx.yy.zz]	
 *  @brief      [brief description of the content]
 *  @author     Armin Egger
 *  Website     (optional) [https://... ]
 *  Support     (optional) [xxx@yyy.zzz]
 ******************************************************************************/

// ============================================================================
//                           END OF FILE
// ============================================================================

bool get_06eggarm(string login)
{
    if (login == "06eggarm")
    {
        cout << "Name: Armin\n Nachname: Egger\n Alter: 16\n Wohnort: Proveis";
        return true;
    }
    else{
        return false;
    }
    
}