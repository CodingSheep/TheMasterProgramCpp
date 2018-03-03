//
//  CSC160Manager.cpp
//  TheMasterProgram(CPP)
//
//  Created by Jarrod Raine on 8/25/16.
//  Copyright © 2016 Jarrod Raine. All rights reserved.
//

#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))

#include <iostream>
#include <string>

#include "CSC160Manager.hpp"
#include "ProjectManager.hpp"
#include "Assignments.hpp"

using namespace std;

//Table of Contents
void inputReader160();
void listPrograms160();

//Variables
bool runningHere = true;
string input160;

void CSC160Manager()
{
    bool alreadySaid = false;
    do
    {
        if (!alreadySaid)
        {
            listPrograms160();
            cout<<"\nWhich section would you like to take a look at?"<<endl;
            cout<<"(Type \"MainMenu\" to go back)"<<endl;
            cout<<"(Type \"Quit\" or \"Exit\" to go back)"<<endl;
            alreadySaid = true;
        }
        
        cout<<">>";
        cin>>input160;
        transform(input160.begin(),input160.end(),input160.begin(),::tolower);
        cout<<endl;
        
        inputReader160();
        
    } while(runningHere);
}

void inputReader160()
{
    if (input160 == "projects")
    {
        cout<<"Loading ProjectManager..."<<endl;
        ProjectManager();
        if(runningHere)
            cout<<"Welcome back to the CSC160 Menu"<<endl;
    }
    else if (input160 == "assignments")
    {
        cout<<"Loading AssignmentManager..."<<endl;
        Assignments();
        if(runningHere)
            cout<<"Welcome back to the CSC160 Menu"<<endl;
    }
    else if (input160 == "mainmenu")
    {
        runningHere = false;
    }
    else if ((input160 == "quit") || (input160 == "exit"))
    {
        exit(2);
    }
}

void listPrograms160()
{
    string programList[] = {"Projects", "Assignments"};
    for(int i = 0; i < ARRAY_SIZE(programList); i++)
        cout<<(i+1)<<"| "<<programList[i]<<endl;
}