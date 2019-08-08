//
//  string_compare.hpp
//  string_compare
//
//  Created by fengsh on 2019/8/6.
//  Copyright © 2019 fengsh. All rights reserved.
//

#ifndef string_compare_hpp
#define string_compare_hpp

#include <iostream>
using namespace std;

void compare(String &string1,String &string2)
{
    if(operator > (string1,string2)==1)
    {string1.display();cout<<">";string2.display();}
    else if(operator < (string1,string2)==1)
    {string1.display();cout<<"<";string2.display();}
    else if(operator == (string1,string2)==1)
    {string1.display();cout<<"=";string2.display();}
    cout<<endl;
}


#endif /* string_compare_hpp */
