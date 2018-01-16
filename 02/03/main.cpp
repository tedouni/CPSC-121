//WEEK TWO EX THREE


#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
 
    const double ADULT_RATE= 120.0;
    const double CHILD_RATE= 60.0;
    const double SENIOR_RATE=100.0;
    
    int choice,months;
    double charges;
    
   do
    {
        cout<<"\n   Health Club Membership Menu\n\n";
        cout<<"1.   Standard Adult Membership\n";
        cout<<"2.   Child Membersip\n";
        cout<<"3.   Senior Citizen Membership\n";
        cout<<"4.   Quit the program\n\n";
        cout<<"Enter your choice.";
        cin>>choice;
        
        
    
    while ((choice<1) || (choice>4))
    {
        cout<<"Please enter 1, 2, 3, or 4: ";
        cin>>choice;
        
    }
        
        if (choice !=4)
        {
            cout<<"For how many months? ";
            cin>>months;
            
            
            switch (choice)
            {
                case 1:
                    charges=months*ADULT_RATE;
                    break;
                    
                case 2:
                    charges=months*CHILD_RATE;
                    break;
                    
                case 3:
                    charges=months*SENIOR_RATE;
                    break;
         
            }
            
            cout<<fixed<<showpoint<<setprecision(2);
            cout<<"The total charges are $"<<charges<<endl<<endl;
            
            
        }
    }
    
    while (choice !=4);
    

    return 0;
}

