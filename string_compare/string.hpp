//
//  string.hpp
//  string_compare
//
//  Created by fengsh on 2019/8/6.
//  Copyright © 2019 fengsh. All rights reserved.
//

#ifndef string_hpp
#define string_hpp

#include <stdio.h>

class String
{
public:
    String(){p = NULL;}
    String(const char *str);
    friend bool operator > (String &string1,String &string2);
    friend bool operator < (String &string1,String &string2);
    friend bool operator == (String &string1,String &string2);
    void display();
private:
    const char *p;
};

#endif /* string_hpp */
