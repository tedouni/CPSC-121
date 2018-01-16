//
//  Chapter.h
//  ProjectTwoTextAnalysis
//
//  Created by Tayseer Edouni on 3/25/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __ProjectTwoTextAnalysis__Chapter__
#define __ProjectTwoTextAnalysis__Chapter__
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

class Chapter
{
private:
    struct NODE
    {
        int wordCount;
        string wordValue;
        NODE *next;
    };
    NODE *HashTable[14]; //An array that consists of pointers to nodes
    //H[0] is a dumby index since there are no words with str.length of 0
    
    //NODE* list;
    
public:
    Chapter();
    friend string toLower(string word);
    friend string removePunct(string word);
    int hashFun(string word);
    void insert(string word);
    void displayTable();
    
};

#endif /* defined(__ProjectTwoTextAnalysis__Chapter__) */
