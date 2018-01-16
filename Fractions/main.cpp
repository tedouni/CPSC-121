//
//  main.cpp
//  Fraction
//
//  Created by Tayseer Edouni on 2/22/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "Fraction.h"

using namespace std;

int main(void)
{
    
    Fraction  f01, f31( 3 ), f34( 3, 4 ), f24( 2, 4 );
    cout << "f01 is: " << f01 << endl;
    cout << "f31 is: " << f31 << endl;
    cout << "f34 is: " << f34 << endl;
    cout << "f24 is: " << f24 << endl << endl;
    cout << "add( f34, f24 ) is: " << add( f34, f24 ) << endl;
    cout << "sub( f34, f24 ) is: " << sub( f34, f24 ) << endl;
    cout << "mul( f34, f24 ) is: " << multi( f34, f24 ) << endl;
    cout << "div( f34, f24 ) is: " << div( f34, f24 ) << endl << endl;
    
    /////////////////////////////////////////////////////////////////////
    
    
    Fraction  f18( 1, 8 ), f28( 2, 8 );
    cout << "f18 is: " << f18 << endl;
    cout << "f28 is: " << f28 << endl << endl;
    cout << "adding f28 to f18" << endl;
    f18.addBy( f28 );
    cout << "now, f18 is: " << f18 << endl << endl;
    cout << "subtracting f28 from f18" << endl;
    f18.subBy( f28 );
    cout << "now, f18 is: " << f18 << endl << endl;
    cout << "multiplying f18 by f28..." << endl;
    f18.mulBy( f28 );
    cout << "now, f18 is: " << f18 << endl << endl;
    cout << "dividing f18 by f28..." << endl;
    f18.divBy( f28 );
    cout << "now, f18 is: " << f18 << endl << endl;
    
    
    //  uncomment to see what happens if you try to set the denominator to 0
    // cout << "trying to set f18's denominator to 0..." << endl;
    //  f18.den( 0 );
    //  uncomment to see what happens if you try to divide by a fraction with 0 value
      //cout << "attempting divide by fraction with 0 value" << endl;
      //f31.divBy( f01 );
    
    cout << "...done." << endl;
    
    return 0;
}