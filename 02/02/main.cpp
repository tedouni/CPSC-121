//WEEK TWO EX TWO

#include <iostream>
#include <iomanip>
using  namespace std;




int main(void)
{
    
    const double SPEED_IN_AIR=1100 ;//ft per second
    const double SPEED_IN_WATER=4900; //ft per second
    const int SPEED_IN_STEEL=16400; //ft per second
    int numberChoice;
    double numberOfFeet;
    double timeToTravel;
    bool ENDPROGRAM;
    
    
    cout<<"Calculate the speed of sound in different media\n\n";
    cout<<"1. Air\n2. Water\n3. Steel\n4. Quit the program\n\n";
    
    do
    {
        
    cout<<"Enter your choice: ";
    cin>>numberChoice;
    
    switch (numberChoice)
    {
        case 1:                                 //Air
            
            cout<<"Enter feet for the sound wave to travel in AIR: ";
            cin>>numberOfFeet;
            while (numberOfFeet<0)
            {
                cout<<"Entered negative number. Please enter again";
                cin>>numberOfFeet;
                
            }
            timeToTravel=numberOfFeet/SPEED_IN_AIR;
            cout<<"It will take "<<fixed<<showpoint<<setprecision(4)<<timeToTravel<<
            " s for sound to travel "<<numberOfFeet<<" feet in STEEL\n";
            
            ENDPROGRAM=true;
            
            break;
        case 2:                                 //Water
            
            cout<<"Enter feet for the sound wave to travel in WATER: ";
            cin>>numberOfFeet;
            while (numberOfFeet<0)
            {
                cout<<"Entered negative number. Please enter again";
                cin>>numberOfFeet;
                
            }
            
            timeToTravel=numberOfFeet/SPEED_IN_WATER;
            cout<<"It will take "<<fixed<<showpoint<<setprecision(4)<<timeToTravel<<
            " s for sound to travel "<<numberOfFeet<<" feet in WATER\n";

            ENDPROGRAM=true;
            break;
        
        case 3:                                 //Steel
            
            cout<<"Enter feet for the sound wave to travel in STEEL: ";
            cin>>numberOfFeet;
            while (numberOfFeet<0)
            {
                cout<<"Entered negative number. Please enter again";
                cin>>numberOfFeet;
                
            }
            
            timeToTravel=numberOfFeet/SPEED_IN_STEEL;
            cout<<"It will take "<<fixed<<showpoint<<setprecision(4)<<timeToTravel<<
            " s for sound to travel "<<numberOfFeet<<" feet in STEEL\n";

            ENDPROGRAM=true;
            break;
            
        case 4:
            ENDPROGRAM=true;
            break;
            
        default:
            cout<<"Invalid Input. Please choose 1 (Air), 2 (Water), \n3 (Steel), or 4 (Quit)\n";
            ENDPROGRAM=false;
            break;
    }
        
    }
    
    
    while (!ENDPROGRAM);
    return 0;
}

