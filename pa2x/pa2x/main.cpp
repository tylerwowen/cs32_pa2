//
//  main.cpp
//  pa2x
//
//  Created by Tyler Weimin Ouyang on 8/16/14.
//  Copyright (c) 2014 Tyler Weimin Ouyang. All rights reserved.
//

#include <iostream>
#include "sorting.h"

int main(int argc, const char * argv[]) {
    int testarray[]={4,1,2,3,0,9,4,13,89,17,6,54,5,2,42,41};
    merge_sort(&testarray[0], 16);
    for (int i=0; i<16; i++){
        std::cout << testarray[i]<<'\n';
    }
//    std::cout << "1 for fail 0 for good\n"
//    << insertion_sort(&testarray[4],6) << "\n"
//    << testarray[0]<< testarray[1]<< testarray[2]<< testarray[3] << testarray[4];
//
    std::cout << "\nHello, World!\n";
    return 0;
}
