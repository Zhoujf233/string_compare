//
//  operator.cpp
//  string_compare
//
//  Created by fengsh on 2019/8/6.
//  Copyright © 2019 fengsh. All rights reserved.
//

#include "string.hpp"
#include <string>

bool operator > (String &string1,String &string2)
{
    if(strcmp(string1.p,string2.p)>0)
        return true;
    else
        return false;
}

bool operator < (String &string1,String &string2)
{
    if(strcmp(string1.p,string2.p)<0)
        return true;
    else
        return false;
}

bool operator == (String &string1,String &string2)
{
    if(strcmp(string1.p,string2.p)==0)
        return true;
    else
        return false;
}
