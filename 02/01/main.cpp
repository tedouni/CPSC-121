
//WEEK TWO EX ONE

#include <iostream>

using namespace std;

int main(void)
{

    double widthOne,widthTwo,lengthOne,lengthTwo;
    double areaOne=0,areaTwo=0;
    
    cout<<"Enter length and width of rectangle 1:\t";
    cin>>widthOne>>lengthOne;
    cout<<"Enter length and width of rectangle 2:\t";
    cin>>widthTwo>>lengthTwo;
    
    
    areaOne=widthOne*lengthOne;
    areaTwo=widthTwo*lengthTwo;
    
    cout<<"Rectangle 1's area is: "<<areaOne<<endl;
    cout<<"Rectangle 2's area is: "<<areaTwo<<endl;
    
    if (areaOne==areaTwo)
        cout<<"Rectangle 1's area is EQUAL TO Rectangle 2's area\n";
    
    else if(areaOne<areaTwo)
        cout<<"Rectangle 1's area is LESS THAN Rectangle 2's area\n";
    else if(areaOne>areaTwo)
        cout<<"Rectangle 1's area is GREATER THAN Rectangle 2's area\n";
    
    return 0;
}

