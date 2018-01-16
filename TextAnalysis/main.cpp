//
//  main.cpp
//  ProjectTwoTextAnalysis
//
//  Created by Tayseer Edouni on 3/25/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include "Chapter.h"
#include "Book.h"
#include <string>
#include <fstream>

void startProgram();
void multipleChapterAnalysis();

int main ()
{
    
    startProgram();
    
    
    
    
    return 0;
}


void startProgram()
{
	char repeatProgram;
	do{
        Book myBook;
        
        
		
        
        myBook.ReadFile();
        
		cout << "Run multiple chapter analysis (if applicable) (y/n)? ";
		char doMultipleChapter;
		cin >> doMultipleChapter;
        
        if (doMultipleChapter == 'y')
			cout << "...running analysis---multiple chapter mode on\n";
		else
			cout << "...running analysis---multiple chapter mode off\n";
        
        //output results
        
        if (doMultipleChapter == 'n')
            myBook.displayBook();
        
            else
         {
             cout<<"How many chapters are there left? ";
             int numberOfChaptersLeft;
             cin>>numberOfChaptersLeft;
             
             for (int i=0; i<numberOfChaptersLeft; ++i)
             {
                 myBook.newChapter();

             }
             
         }
            
            
            //inputFile.close();
        myBook.displayBook();
        
		cout << "Analyze another file (y/n)? ";
		cin >> repeatProgram;
        
	} while (repeatProgram == 'y');
    
	cout << "...done\n";
}
