// Application.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Application.h"

// running a simple pull and merge request example
CoolClass::CoolClass(void)
{
}

int CoolClass::Calc(int a, int b)
{
    if (a == b)
    {
        return 2 * a;
    }
    else
    {
        return a + b;
    }
    
}
