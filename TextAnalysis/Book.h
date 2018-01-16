//
//  Book.h
//  ProjectTwoTextAnalysis
//
//  Created by Tayseer Edouni on 3/25/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __ProjectTwoTextAnalysis__Book__
#define __ProjectTwoTextAnalysis__Book__

#include <iostream>
#include "Chapter.h"
#include <vector>
#include <fstream>

class Book
{
    
private:
    vector<Chapter> chapters; //ceate an array of pointers to different chapters
    int chapterNumber;      //current chapter
    
    
public:
    Book();
    void ReadFile();
    void add(string word);
    void newChapter();
    void displayBook();
};
#endif /* defined(__ProjectTwoTextAnalysis__Book__) */
