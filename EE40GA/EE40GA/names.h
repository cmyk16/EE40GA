//
//  names.h
//  EE40GA
//
//  Created by Will Atherton on 12/11/2018.
//  Copyright © 2018 The game of Oakes. All rights reserved.
//
//First name (string); Family name (string);  Bio data  (height, weight, bl ood  type : “O – ”, “O +”,  “A  –”, “A +”, “B – ”, “B +”, “AB  –”, “AB +” ). 

#ifndef names_h
#define names_h

#include <generalArray.h>
#include <string>


class names : public general_array  {
public:
    char firstNames[5][10];
    char lastNames[5][11];
    
    char bloodType[8][10] = {"O-", "O+", "A-","A+", "B-", "B+", "AB-", "AB+"};
    
    int random_no_generate(int min, int max){
        int item;
        
        item=rand();
        item = item % (max+1);
        
        item = item + min;
        return item;
    };
    
    int randomize(){
        srand (time(NULL));
        char rnd_firstNames[5][10] = {"John", "Robb", "Bran","Arya", "Sansa"};
        char rnd_lastNames[5][11] = {"Stark", "Lanister", "Baratheon","Targaryen"};
        
        int i;
        for (i=0; i<=5; i++){
            int Fname_rnd = random_no_generate(0, 4);
            int Lname_rnd = random_no_generate(0, 4);
            int height_rnd = random_no_generate(100, 200);
            int weight_rnd = random_no_generate(50, 120);
            int blood_rnd = random_no_generate(0, 4);
            
            
            
            
            
            printf("%s %s %d %d %s\n", rnd_firstNames[Fname_rnd], rnd_lastNames[Lname_rnd], height_rnd, weight_rnd, bloodType[blood_rnd]);
            
        
        
        }
        return 0;
    };
//protected:
    
};


#endif /* names_h */
