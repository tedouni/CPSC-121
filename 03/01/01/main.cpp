//
//  main.cpp
//  First_Ex
//
//  Created by Tayseer Edouni on 2/1/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{

    fstream outputFile;
    outputFile.open("demofile.txt",ios::out);
    
    cout<<"Now writting data to the file...\n";
    
    outputFile<<"Mozart"    <<endl<<    "Beethoven"<<endl
              <<"Schubert"  <<endl<<  "J.S. Bach"<<endl
              <<"F. Chopin" <<endl<<    "Pyotr Tchaikovsky"<<endl
              <<"Rachmaninov"   <<endl<<   "F. Liszt"<<endl
              <<"Joseph Haydn"  <<endl<<    "Antonio Vivaldi"<<endl;
    outputFile.close();
    cout<<"...done.\n";
    
    
    return 0;
}

