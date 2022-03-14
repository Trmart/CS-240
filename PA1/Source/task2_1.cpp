/*********************************************
 * Id: mart8517
 * Name: Taylor Martin
 * Class: CS-240 Operating Systems
 * Assignment : PA1
 * Due Date: 3/9/2022
 * File : task2_1.cpp
 * Compile: g++ -Wall -Wextra task2_1.cpp -o task2_1.exe
 * Run: ./task2_1.exe
 * 
 * This program implements an infinite loop
 * opening a file, writing a single char, and 
 * then closes the file. 
 * This program will be ran in the background
 * and then analyzed with top linux command. 
 *********************************************/ 
#include <fstream>
#include <iostream> 
#include <string>
int main()
{  
   std::string outFileName = "task2Output.txt"; 
  
   while(true)
   {
      //file constructor to open and append to a file
      std::ofstream out(outFileName, std::ios_base::out | std::ios_base::app); 

      //make sure the file was created 
      if(!out)
      {
         std::cerr << "ERROR OPENING FILE : " << outFileName << " EXITING PROCESS\n"; 
         exit(1); 
      }

      //output one character to file
      out << "A"; 
      
      //close file
      out.close(); 
   }

   return 0; 
}