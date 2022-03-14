/*********************************************
 * Id: mart8517
 * Name: Taylor Martin
 * Class: CS-240 Operating Systems
 * Assignment : PA1
 * Due Date: 3/9/2022
 * File : task1.cpp
 * Compile: g++ -Wall -Wextra task1.cpp -o task1.exe
 * Run: ./task1.exe
 * 
 * This program implements argv to display 
 * the programs name. Implements getpid to
 * display the process id and parent process id. 
 * It then uses a infinite loop to increment 
 * an iteration count. displaying it with stderr/cerr. 
 *********************************************/ 
#include <iostream> 
#include <unistd.h>

int main(int argc, char* argv[])
{
   //variables to store process id's
   int p_id, p_pid; 
   //calls getpid from the unixstd, retreiving process ID
   p_id = getpid(); 
   p_pid = getpid(); 
   //outputs program name, process ID, and Parent Process ID
   std::cout << "Program Name: " << argv[0] << "\n"; 
   std::cout << "Process ID: " << p_id << "\n"; 
   std::cout << "Parent Process ID: " << p_pid << "\n\n"; 

   int count = 0; 

   // infinite loop to increment 
   // an iteration count. displaying it with stderr/cerr. 
   while(true)
   {
      std::cerr << "Iteration Count: " << count << "\n"; 
      std::cout << "Sleeping for 1 second\n\n"; 
      sleep(1); 
      count++; 
   }

   return 0; 
}


//task1.cpp output: 
/*********************************************
   Program Name: ./task1.exe
   Process ID: 6094
   Parent Process ID: 6094

   Iteration Count: 0
   Sleeping for 1 second

   Iteration Count: 1
   Sleeping for 1 second

   Iteration Count: 2
   Sleeping for 1 second

   Iteration Count: 3
   Sleeping for 1 second

   Iteration Count: 4
   Sleeping for 1 second

   Iteration Count: 5
   Sleeping for 1 second

   Iteration Count: 6
   Sleeping for 1 second
 *********************************************/ 
//killed after 6 seconds