//
//  main.cpp
//  string_compare
//
//  Created by fengsh on 2019/8/6.
//  Copyright © 2019 fengsh. All rights reserved.
//

#include <iostream>
#include "string.hpp"
#include "string_compare.hpp"
using namespace std;

int main(int argc, const char * argv[])
{
    String string1("Hello"),string2("Book"),string3("Computer"),string4("Hello");
    compare(string1,string2);
    compare(string2,string3);
    compare(string1,string4);
    return 0;
}
