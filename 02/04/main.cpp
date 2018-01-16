//WEEK TWO EX FOUR


#include <iostream>
using namespace std;

int main(void)
{
    int counter=1;
    

    for (int i=32; i<=127;i++)
    {
        if (i!='')
        {
            cout<<(char)i<<" ";

        }
        else
        cout<<"DEL";

        if (counter%16==0)
        {
            cout<<endl;
        }
        counter++;
    }
    
    cout<<endl;
    
    return 0;
}

