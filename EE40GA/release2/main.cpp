//
//  main.cpp
//  release2
//
//  Created by Will Atherton on 12/11/2018.
//  Copyright © 2018 The game of Oakes. All rights reserved.
//First name (string); Family name (string);  Bio data  (height, weight, bl ood  type : “O – ”, “O +”,  “A  –”, “A +”, “B – ”, “B +”, “AB  –”, “AB +” ). 

#include <iostream>

#include <names.h>
names names;

int main(int argc, const char * argv[]) {
    names.randomize();
    return 0;
}
