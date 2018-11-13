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
    
    char bloodType[8][10] = {"O-", "O+", "A-","A+", "B-", "B+", "AB-", "AB+"};
    
    integer_item db_height;
    integer_item db_weight;
    integer_item db_bloodtype;
    
    int randomize(){
        
        int i;
        for (i=0; i<=5; i++){
            //int Fname_rnd = random_no_generate(0, 4);
            //int Lname_rnd = random_no_generate(0, 4);
            //int height_rnd = random_no_generate(100, 200);
            //int weight_rnd = random_no_generate(50, 120);
            //int blood_rnd = random_no_generate(0, 4);
            
            //printf("%s %s %d %d %s\n", rnd_firstNames[Fname_rnd], rnd_lastNames[Lname_rnd], height_rnd, weight_rnd, bloodType[blood_rnd]);
            
            //integer_item ref_integer;
            
            db_height.generateRandomBio(100,200);
            db_weight.generateRandomBio(50,120);
            db_bloodtype.generateRandomBio(0,7);
            
        }
        
        cout << "Height = " << db_height.getItemVal() << " ";
        cout << "Weight = " << db_weight.getItemVal() << " ";
        cout << "Blood Type = " << bloodType[db_bloodtype.getItemVal()] << endl;
        
        //db_height.printArrayOnScreen();
            
        return 0;
    };
//protected:
    
};


#endif /* names_h */
