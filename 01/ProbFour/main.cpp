//
//  main.cpp
//  WeekOneExFour
//
//  Created by Tayseer Edouni on 1/18/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    const double PRICE_PER_CUBIC_YD=22.00;

    double squareFeet; //square feet of land to be covered
    int depth; //inches deep the mulch is to be spread
    double cubicFeet, //number of cubic feet of mulch needed
           cubicYards, //number of cubic yards of mulch needed
           totalPrice; //total price for all the cubic yards ordered
    
            //get inputs
    
    cout<<"Number of square feet to be covered in mulch: ";
    cin>>squareFeet;
    cout<<"Number of inches deep: ";
    cin>>depth;
    
            //perform calculations
    cubicFeet= squareFeet*(depth/12.0);
    cubicYards= cubicFeet/27;
    totalPrice= cubicYards* PRICE_PER_CUBIC_YD;
            //display outputs
    
    cout<<"\nNumber of cubic yards needed: "<<cubicYards<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Price per cubic yard: $"<<setw(7)
    <<PRICE_PER_CUBIC_YD<<endl;
    
    cout<<"Total price: "
    <<totalPrice<<endl<<endl;
    
    
    return 0;
}

