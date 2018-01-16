//
//  Chapter.cpp
//  ProjectTwoTextAnalysis
//
//  Created by Tayseer Edouni on 3/25/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include "Chapter.h"

Chapter ::Chapter()
{
    for (int i=0; i<=13; ++i)
    {
        HashTable[i]=NULL;      //Sets all nodes to NULL
    }
}

int Chapter::hashFun(string word) //check to see the length of the word
{
    return (word.length() <13)? word.length() : 13;
}


string toLower(string s)
{
	string r = s;
	for (int i = 0; i < r.size(); i++)
        if (r[i] >= 'A' && r[i] <= 'Z')
            r[i] = tolower(r[i]);
	return r;
}

string removePunct(string word)
{
    string changeMe=word;
    
    
    int size = changeMe.size()-1;
    
    
    if (changeMe[size] ==',' || changeMe[size] == '.' || changeMe[size] == '?' || changeMe[size] == '-' || changeMe[size] == '!'
        || changeMe[size] == ':')
    {
        changeMe =changeMe.substr(0,changeMe.size()-1);
        
    }
    if (changeMe[0] == ',' || changeMe[0] == '.' ||changeMe[0] == '?' ||changeMe[0]== '-' ||changeMe[0] == ':')
    {
        changeMe.erase(find(changeMe.begin(), changeMe.end(), '.'));
        changeMe.erase(find(changeMe.begin(), changeMe.end(), '?'));
        changeMe.erase(find(changeMe.begin(), changeMe.end(), ','));
    }
    return changeMe;
}

void Chapter::insert(string word)
{
    if (word== "." || word == "," || word == "?" || word=="-" || word==":")
        return;
    
    word=toLower(word);
    
    word= removePunct(word);
    int i= hashFun(word);  //first check word length
    
    //if word does not exist
    NODE *check= HashTable[i];
    while (check!=NULL) //want to check every node -po
    {
        if (word==check->wordValue)
        {
            check->wordCount++;
            return;     //ends method
        }
        
        check=check->next; //go to next node
    }
    
    //If program comes to this point, means word not read
    //Must create a new node and sort it
    NODE *p=HashTable[i], *q= HashTable[i],*r;
    r=new NODE;
    r->wordValue=word;
    r->next=NULL;
    r->wordCount=1;
    
    while(p!=NULL && p->wordValue <word)
    {
        q=p;
        p=p->next;
    }
    
    if(p==HashTable[i])
    {
        HashTable[i]=r;
        r->next=p;
    }
    else if( p==NULL)
    {q->next=r;}
    else
    {
        r->next=p;
        q->next=r;
    }
    
    
    
    
}

void Chapter::displayTable()
{
    NODE *p;
    cout<<right<<setw(4);
    for (int i=1; i<=13; i++)
    {
        cout<<"==========LENGTH OF WORDS=======\n";
        cout<<"                ";
        if (i==13) cout<<"13+\n";
        else cout<<i<<endl;
        
        p= HashTable[i];
        
        while (p!=NULL)
        {
            if (p->wordCount > 1) //only words that occur more than once
                cout<<p->wordValue<<" "<<p->wordCount<<endl;
            else
                cout<<p->wordValue<<endl;
            
            p=p->next;
        }
    }
}
