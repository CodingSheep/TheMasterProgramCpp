//
//  main.cpp
//  TheMasterProgram(CPP)
//
//  Created by Jarrod Raine on 8/25/16.
//  Copyright © 2016 Jarrod Raine. All rights reserved.
//

#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))

#include <iostream>
#include <string>
#include <fstream>

#include "GlobalValues.hpp"
#include "CSC126Manager.hpp"
#include "CSC160Manager.hpp"
#include "MiscManager.hpp"

using namespace std;

//Table of Contents
void inputReader();
void listCommands();
void listPrograms();

//Code
int main(int argc, const char * argv[])
{
    bool alreadySaid = false;
    do
    {
        if (!alreadySaid)
        {
            cout<<"This is Jarrod Raine's \"Master Program\"!"<<endl;
            cout<<"Please choose from the following list which programs you'd like to take a look at:\n"<<endl;
            listPrograms();
            cout<<"\nIf you need some help with the commands, please type \"Help\""<<endl;
            cout<<"If you want to quit the program, just type \"Quit\""<<endl;
            alreadySaid = true;
        }
        cout<<">>";
        cin>>input;
        transform(input.begin(),input.end(),input.begin(),::tolower);
        cout<<endl;
        inputReader();
    } while (running);
    inputReader();
    
    return 1;
}

void inputReader()
{
    if(input == "csc160")
    {
        cout<<"Loading CSC160Manager..."<<endl;
        CSC160Manager();
        if(running)
            cout<<"Welcome back to the Main Menu"<<endl;
    }
    else if (input == "csc126")
    {
        cout<<"Loading CSC126Manager..."<<endl;
        CSC126Manager();
        if(running)
            cout<<"Welcome back to the Main Menu"<<endl;
    }
    else if (input == "misc")
    {
        cout<<"Loading MiscManager..."<<endl;
        MiscManager();
        if(running)
            cout<<"Welcome back to the Main Menu"<<endl;
    }
    else if (input == "changelog")
    {
        ifstream changelog ("Changelog.txt");
        string line;
        if(changelog.is_open())
        {
            while(getline(changelog,line))
            {
                cout<<line<<endl;
            }
            cout<<endl;
        }
    }
    else if (input == "dev")
    {
        if(dev)
        {
            cout<<"Here's the current Dev program:"<<endl;
            //Dev Program Here
        }
        else
            cout<<"There is currently not a dev program in the making"<<endl;
    }
    else if (input == "help")
    {
        cout<<"Listing Commands..."<<endl;
        listCommands();
    }
    else if (input == "hiddenmessage")
    {
        cout<<"Wow. You found the hidden message!"<<endl;
    }
    else if (input == "information")
    {
        cout<<"This is the Master Program (C++ Edition)!"<<endl<<"Made by Jarrod Raine on August 25, 2016"<<endl;
    }
    else if (input == "listprograms")
    {
        cout<<"Listing Programs..."<<endl;
        listPrograms();
    }
    else if ((input == "quit") || (input == "exit"))
    {
        exit(1);
    }
    else
        cout<<"I dont know what that means."<<endl;
}

void listCommands()
{
    string commandList[] = {"Changelog", "Dev", "Help", "Information", "ListPrograms", "Quit"};
    for(int i = 0; i < ARRAY_SIZE(commandList); i++)
        cout<<"| "<<commandList[i]<<endl;
}

void listPrograms()
{
    string programList[] = {"CSC160", "CSC126", "Misc"};
    for(int i = 0; i < ARRAY_SIZE(programList); i++)
        cout<<(i+1)<<"| "<<programList[i]<<endl;
}
