/*********************************************
 * Id: mart8517
 * Name: Taylor Martin
 * Class: CS-240 Operating Systems
 * Assignment : PA1
 * Due Date: 3/9/2022
 * File : task2_2.cpp
 * Compile: g++ -Wall -Wextra task2_2.cpp -o task2_2.exe
 * Run: ./task2_2.exe
 * 
 * This program implements an infinite loop
 * an performs a very simple arithmetic calculation
 * incrementing a counter. 
 * 
 * This program will be ran in the background
 * and then analyzed with top linux command
 *********************************************/ 

int main()
{  
   //init count variable 
   int count = 0; 

   //infinite loop to perform a simple arithmetic calculation 
   while(true)
   {
      count++; 
   }

   return 0; 
}