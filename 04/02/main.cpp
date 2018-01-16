//
//  main.cpp
//  WeekFourExOnePartTwo
//
//  Created by Tayseer Edouni on 2/8/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
using namespace std;

void reverse( ostream& , unsigned int n) ;

int main( void ) {

    char choice;
    int number;
    
    do {
        cout << "Number to reverse: ";
        cin >> number;
        
        cout << "Reversed number: ";
        reverse ( cout, number );
        cout << endl;
        
        cout << "Again (y/n) ?";
        cin >> choice;
        
    } while (choice == 'Y' || choice == 'y' );
    
    cout <<"...done.\n";
    return 0;
}

void reverse( ostream& os , unsigned int n) {
    
    if ( n!= 0 ) {    os<< n % 10; }
    
    if ( n>0 ) { reverse(cout, n/10 ); }
    
    
    
}
