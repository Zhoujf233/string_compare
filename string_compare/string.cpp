//
//  string.cpp
//  string_compare
//
//  Created by fengsh on 2019/8/6.
//  Copyright © 2019 fengsh. All rights reserved.
//

#include "string.hpp"
#include <iostream>
using namespace std;

String::String(const char *str){p = str;}

void String::display(){cout<<p;}
