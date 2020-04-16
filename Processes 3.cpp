//
//  Processes.cpp
//  ITSC 3146
//
//  Created by Bahamon, Julio on 1/12/17.
//


/*
 @file Processes.cpp
 @author student name, student@uncc.edu
 @author student name, student@uncc.edu
 @author student name, student@uncc.edu
 @description: <ADD DESCRIPTION>
 @course: ITSC 3146
 @assignment: in-class activity [n]
 */


#ifndef Processes_cpp
#define Processes_cpp

#include "Processes.h"
#include <sys/types.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>



using namespace std;


// Part 1: Working With Process IDs
pid_t getProcessID(void) //The function must find and store the process's own process id
{
   int id;
   id = (int)getpid(); 
   return id; //return the value
}


// Part 2: Working With Multiple Processes
string createNewProcess(void)
{
   pid_t id = fork();
   
   // DO NOT CHANGE THIS LINE OF CODE
   process_id = id;
   
   
   if(id == -1)
   {
      return "Error creating process";
   }
   else if (id == 0)
   {
      

      cout<< "I am a child process!";
      return "I am bored of my parent, switching programs now";
     
   }
   else
   {
      // TODO: Add your code here

      cout<< "I just became a parent!"<<endl;
      int status; 
      pid_t waitid; 
      waitid = wait(&status);
      return "My child process just terminated!";
   }
}


// Part 3: Working With External Commands"
void replaceProcess(char * args[])
{
   // Spawn a process to execute the user's command.
   pid_t id = fork();
   int check;
   
   if(id == -1)
   {
       cout<< "Error creating process";
   }
  
   else if (id==0)
   {
      
      check = execvp(args[0], args); 
      
   }
   else 
   {
      int status; 
      pid_t waitid; 
      waitid = wait(&status);
      
      
   }
   
   

   
   
   
   
}

#endif /* TestProg_cpp */
