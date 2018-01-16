//
//  main.cpp
//  ExOnePartTwo
//
//  Created by Tayseer Edouni on 2/1/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(void)
{

    fstream inputFile;
    string names;
    
    cout<<"Opening file \"demofile.txt\"...\n";
    cout<<"Reading names...\n";
    
    inputFile.open("/Users/troy/Desktop/Xcode/demofile.txt",ios::in);
    
    while (getline(inputFile,names))
    {
        cout<<names<<endl;
    }
    
    inputFile.close();
    cout<<"...done.\n";
    
    return 0;
}

