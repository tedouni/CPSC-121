//
//  Book.cpp
//  ProjectTwoTextAnalysis
//
//  Created by Tayseer Edouni on 3/25/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include "Book.h"
Book::Book()
{
    chapterNumber=1;
    chapters.push_back(Chapter()); //Push cumulative chapter
    chapters.push_back(Chapter()); //Push chapter 1
    
}

void Book::ReadFile()
{
    cout<<"Enter file name ";
    string filename;
    cin>>filename;
    fstream inputFile;
    inputFile.open(filename,ios::in);
    
    while (!inputFile.eof())
    {
        string word;
        inputFile >> word;
        add(word);

    }
    
}

void Book::add(string word) //used for start of program
{
    chapters[0].insert(word);
    chapters[chapterNumber].insert(word);
}

void Book::newChapter()
{
    chapterNumber++;
    chapters.push_back(Chapter()); //push back new chapter
    cout<<"Enter file name ";
    string fileName;
    cin>>fileName;
    fstream inputFile;
    inputFile.open(fileName,ios::in);
    
    while (!inputFile.eof())
    {
        string word;
        inputFile >> word;
       
        add(word);
    }

    inputFile.close();
    
}

void Book::displayBook()
{
    for (int i=1; i<chapters.size(); ++i)
    {
        cout<<"==========CHAPTER "<<i<<"=========\n";
        chapters[i].displayTable();
        cout<<endl<<endl;
    }
}
