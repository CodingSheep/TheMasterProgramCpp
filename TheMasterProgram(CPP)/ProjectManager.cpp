//
//  ProjectManager.cpp
//  TheMasterProgram(CPP)
//
//  Created by Jarrod Raine on 8/25/16.
//  Copyright © 2016 Jarrod Raine. All rights reserved.
//

#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))

#include <iostream>
#include <string>

#include "ProjectManager.hpp"
#include "Project1.hpp"
#include "Project2.hpp"
#include "Project3.hpp"
#include "Project4.hpp"
#include "Project5.hpp"
//#include "Project6.hpp"
//#include "Project7.hpp"
//#include "Project8.hpp"
//#include "Project9.hpp"
//#include "Project10.hpp"
//#include "Project11.hpp"
//#include "Project12.hpp"
//#include "Project13.hpp"

using namespace std;

bool runningHereProjects = true;
string pM;

//Table of Contents
void inputReaderProjects();
void listProgramsProjects();

void ProjectManager()
{
    bool alreadySaid = false;
    do
    {
        if(!alreadySaid)
        {
            listProgramsProjects();
            cout<<"\nWhich Projects would you like to see?"<<endl;
            cout<<"(Type \"CSC160Menu\" to go back)"<<endl;
            alreadySaid = true;
        }
        cout<<">>";
        cin>>pM;
        transform(pM.begin(),pM.end(),pM.begin(),::tolower);
        cout<<endl;
        
        inputReaderProjects();
        
    } while (runningHereProjects);
}

void inputReaderProjects()
{
    if (pM == "project1")
    {
        Project1();
        cout<<"\nProgram Finished"<<endl;
    }
    else if (pM == "project2")
    {
        Project2();
        cout<<"\nProgram Finished"<<endl;
    }
    else if (pM == "project3")
    {
        Project3();
        cout<<"\nProgram Finished"<<endl;
    }
    else if (pM == "project4")
    {
        Project4();
        cout<<"\nProgram Finished"<<endl;
    }
    else if (pM == "project5")
    {
        Project5();
        cout<<"\nProgram Finished"<<endl;
    }
    else if (pM == "project6")
    {
        //Project6();
        cout<<"\nProgram Finished"<<endl;
    }
    else if (pM == "project7")
    {
        //Project7();
        cout<<"\nProgram Finished"<<endl;
    }
    else if (pM == "project8")
    {
        //Project8();
        cout<<"\nProgram Finished"<<endl;
    }
    else if (pM == "project9")
    {
        //Project9();
        cout<<"\nProgram Finished"<<endl;
    }
    else if (pM == "project10")
    {
        //Project10();
        cout<<"\nProgram Finished"<<endl;
    }
    else if (pM == "project11")
    {
        //Project11();
        cout<<"\nProgram Finished"<<endl;
    }
    else if (pM == "project12")
    {
        //Project12();
        cout<<"\nProgram Finished"<<endl;
    }
    else if (pM == "project13")
    {
        //Project13();
        cout<<"\nProgram Finished"<<endl;
    }
    else if (pM == "csc160menu")
    {
        runningHereProjects = false;
    }
    else if ((pM == "quit") || (pM == "exit"))
        exit(3);
}

void listProgramsProjects()
{
    string projectList[] = {"Project 1", "Project 2", "Project 3", "Project 4", "Project 5", "Project 6", "Project 7", "Project 8", "Project 9", "Project 10", "Project 11", "Project 12", "Project 13"};
    
    for(int i = 0; i < ARRAY_SIZE(projectList); i++)
    {
        if(i > 0 && i < 9)
            cout<<(i + 1)<<" | "<<projectList[i]<<endl;
        else
            cout<<(i + 1)<<"| "<<projectList[i]<<endl;
    }
}