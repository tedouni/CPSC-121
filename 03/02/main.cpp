//
//  main.cpp
//  secondEx
//
//  Created by Tayseer Edouni on 2/1/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

/*
 
 F=C*9.0 /5 +32
 C= (F-32)*5 /9
 C=K+273.0
 */

#include <iostream>
#include <iomanip>

using namespace std;

void displayMenu();

void generateTable( float startTemp, float endTemp, float stepSize, int choice);

int getChoice();



int main(void)
{
    displayMenu ( );
    int choice= getChoice ( );
    
  /*  if ( choice == 0 )      //Terminate Program if user entered option 5
    {
        return 0;
    } */
    
    cout<<"Enter starting temp: ";
    int startTemp;
    cin>>startTemp;
    
    cout<<"Enter ending temp: ";
    int endTemp;
    cin>>endTemp;
    
    cout<<"Enter step size: ";
    int stepSize;
    cin>>stepSize;
    
    generateTable( startTemp, endTemp, stepSize, choice );
    
    return 0;
}



void displayMenu()
{
    cout<<"Program that creates a table of the following...\n";
    cout<<"\t\t\tMenu\n";
    cout<<"1. Convert Fahrenheit to Celsius\n";
    cout<<"2. Convert Celsius to Fahrenheiht\n";
    cout<<"3. Convert Celsius to Kelvin\n";
    cout<<"4. Convert Kelvin to Celsius\n";
    cout<<"5. Quit the program\n";
    
}

int getChoice()
{
    cout<<"Enter menu choice: ";
    int choice;
    cin>>choice;
    
    switch ( choice )
    {
        case 1: return 1;
            break;
            
        case 2:
            return 2;
            break;
            
        case 3: return 3;
            break;
            
        case 4: return 4;
            break;
            
        case 5:
            cout<<"...Quiting Program.\n";
            
            return 0;
            break;
        default:
            cout<<"Invalid menu choice. Choose 1,2,3,4 or 5.\n";
            return getChoice();                 //Recursive
            break;
    }
}

void generateTable( float startTemp, float endTemp, float stepSize, int choice)
{
    if ( choice ==1 )                  //Fahrenheit to Celsius
    {
        
        for ( startTemp; startTemp<=endTemp; startTemp+=stepSize )
        {
            float Celsius=( startTemp-32 )*5.0/9.0;
            cout<<right<<setw(9)<<fixed<<showpoint<<setprecision(2)<<startTemp;
            cout<<" F ===>"<<right<<setw(9)<<Celsius<<" C"<<endl;
        }
    }
    
    if ( choice==2 )                  //Celsius to Fahrenheit
    {
        for ( startTemp; startTemp <= endTemp; startTemp += stepSize )
        {
            float Fahrenheit=( startTemp*9.0 )/5.0+32.0;
            cout<<right<<setw(9)<<fixed<<showpoint<<setprecision(2)<<startTemp;
            cout<<" C ===>"<<right<<showpoint<<setprecision(2)<<setw(9)<<Fahrenheit<<" F"<<endl;
        }
    }
    
    if (choice==3)                  //Convert Celsius to Kelvin
    {
        for (startTemp; startTemp<=endTemp; startTemp+=stepSize)
        {
            float Kelvin=startTemp+273.0;
            
            cout<<right<<setw(9)<<fixed<<showpoint<<setprecision(2)<<startTemp;
            cout<<" C ===>"<<right<<setw(9)<<showpoint<<setprecision(2)<<Kelvin<<" K"<<endl;
        }
        
    }
    
    if (choice==4)                      //Kelvin to celsius
    {
        
        for (startTemp; startTemp<=endTemp; startTemp+=stepSize)
        {
            float celsius=startTemp-273;
            cout<<right<<setw(9)<<fixed<<showpoint<<setprecision(2)<<startTemp;
            cout<<" K ===> "<<right<<setw(9)<<celsius<<" C"<<endl;
            
        }

        
    }
}
