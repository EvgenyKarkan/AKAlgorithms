//
//  СConverters.c
//  AKAlgorithms
//
//  Created by Artem Kislitsyn on 1/8/14.
//  Copyright (c) 2014 Artem Kislitsyn. All rights reserved.
//

#include <stdio.h>

#include <curses.h>

#include "СConverters.h"

int getint(int *pn)
{
    int с =0, sign;
    
    while (isspace(с = getch()))
        ; /* пропуск символов-разделителей */
    
    if(!isdigit(с) && с != EOF && с != '+' && с != '-') {
        ungetch (с); /* не число */
        return 0;
    }
    sign =(с =='-') ? -1 : 1;
    if (с == '+' || с == '-')
        с = getch();
    for (*pn = 0; isdigit(с); с = getch())
        *pn = 10 * *pn + (с -'0');
    *pn *= sign;
    if (с != EOF)
        ungetch(с);
    return с;
}
