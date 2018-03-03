//
//  Project2.cpp
//  TheMasterProgram(CPP)
//
//  Created by Jarrod Raine on 8/25/16.
//  Copyright © 2016 Jarrod Raine. All rights reserved.
//

#include <iostream>
#include <string>

#include "Project2.hpp"

using namespace std;

//Table of Contents
void basicInfo();
void creditCalc();

int creditsTaken;
int creditsNeeded;
int creditsLeft;
int semestersLeft;
const int fullTimeCredits = 15;

void Project2()
{
    basicInfo();
    creditCalc();
}

void basicInfo()
{
    string name;
    int age;
    int yearBorn;
    string major;
    
    cout<<"What is your name?\n"<<">>";
    cin>>name;
    cout<<endl;
    
    cout<<"Hello, "<<name<<"! How old are you?\n"<<">>";
    cin>>age;
    cout<<endl;
    
    cout<<"Alright. So you're "<<age<<" years old. What year were you born?\n"<<">>";
    cin>>yearBorn;
    cout<<endl;
    
    cout<<"Alright. So you were born in "<<yearBorn<<". One more question: What is your major?\n"<<">>";
    cin>>major;
    cout<<endl;
    
    cout<<"So you're going for "<<major<<".. Cool!"<<endl;
}

void creditCalc()
{
    bool itWorks = true;
    
    cout<<"How many credits do you need in total for your degree?\n"<<">>";
    cin>>creditsNeeded;
    cout<<endl;
    
    do
    {
        cout<<"How many credit hours did you complete thus far? Include this semester for sake of ease\n"<<">>";
        cin>>creditsTaken;
        cout<<endl;
        
        if(creditsTaken > creditsNeeded)
        {
            cout<<"No seriously..."<<endl;
            itWorks = false;
        }
        else
        {
            itWorks = true;
        }
    } while (!itWorks);
    
    cout<<"Calculating remaining credits needed..."<<endl;
    
    creditsLeft = creditsNeeded - creditsTaken;
    semestersLeft = creditsLeft / fullTimeCredits;
    if(creditsLeft % fullTimeCredits != 0)
        ++semestersLeft;
    
    cout<<"Assuming you are taking 15 credit hours per semester as a full time student..."<<endl;
    cout<<"You have "<<creditsLeft<<" credits left to take over the course of "<<semestersLeft<<" semesters minimum."<<endl;
}