
 
// Week One EX One
//Tayseer Edouni
#include <iostream>
#include <iomanip> //use for setbase()
#include <cstdlib>

using namespace std;

int main(void)
{
    
    char _continue; // 'y' or 'no' to continue program
    
    do   //run program at least once
    {
        
    
    //input decimal number
        
    cout<<"Enter number to convert\n";
    int decimalNumber;
    cin>>decimalNumber;
        
    
    //output base 16
        
        
        cout<<"number is 0x"<<setbase(16)<<decimalNumber<<" (base 16)\n";
        
        
    
    //Output base 10 which is input number
        
        cout<<"number is "<<setbase(10)<<decimalNumber<<" (base 10)\n";
        
        
        
 
        
        
        
    //Convert decimal to octa (base 8)
        
        if (decimalNumber<0)                                //if entered number is negative

        {
            cout<<"number is "<<setbase(8)<<decimalNumber<<" (base 8) \n";
            
            setbase(0);                                 //remove setbase(8)

        }
        
        else
                                                        //for positive decimal numbers
        {
        int remainderOcta=0;
        int arrayUsedToReverseOcta[50];
        int quotientOcta=decimalNumber;
        int xocta=0;
        
        while (quotientOcta!=0)
        {
            remainderOcta=quotientOcta%8;
            arrayUsedToReverseOcta[xocta]=remainderOcta;
            xocta++;
            quotientOcta/=8;
            
        }
        xocta--;                                //to compensate for the extra placement
        
        cout<<"number is ";
        for (; xocta>=0; xocta--)
        {
            cout<<arrayUsedToReverseOcta[xocta];
        }
        cout<<" (base 8)\n";
            
            
        }
        
        
        
        
    //Convert Decimal number to binary number
        
    int remainder=0;
    int arrayUsedToReverse[50];         //Create an array that will be used to reverse the order of binary output
    int quotient=decimalNumber;
    int x=0;
    
        
        
            while (quotient!=0)
            {
                remainder=quotient%2;
                arrayUsedToReverse[x]=remainder;
                x++;
                quotient/=2;
                
            }
            
            x--;                                //to compensate for the extra placement
            
            cout<<"number is ";
        
            for (; x>=0; x--)
            {
                cout<<arrayUsedToReverse[x];
            }
        
            cout<<" (base 2)\n";

            
        
        
        
      
     
    
        cout<<". . . . .Do another conversion (y/n)? \n";
        cin>>_continue;
        
    } 
     
     
    
    while ((_continue=='y') || (_continue=='Y')) ;  //if _continue= 'n' then program will end and return 0
    
    
    return 0;
}

