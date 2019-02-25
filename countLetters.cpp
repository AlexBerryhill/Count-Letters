/*************************************************************************
* Program:                                                                 
*    Assignment 32, Strings                                                
*    Brother Ridges, CS124                                                 
* Author:                                                                  
*    Alexander Berryhill                                                   
* Summary:                                                                 
*    This program will count the number of a letter is in a string.        
*                                                                          
*                                                                          
*                                                                          
*                                                                          
*    Estimated:  0.5 hrs                                                   
*    Actual:     0.5 hrs                                                   
*      The most difficult part was finding cin.ignore()                    
*************************************************************************/

#include <iostream>
using namespace std;

/*************************************************************************
 * count letters counts and returns the number of a letter in a string.    
 ************************************************************************/
int countLetters(char text[], char letter)
{
   int numLetters = 0;
   for (int i = 0; text[i] != '\0'; i++)
   {
      if (text[i] == letter)
      {
         numLetters++;
      }
   }
   return numLetters;
}

/*************************************************************************
 * main will prompt a get a letter and text. It will ask countLetters      
 * for numLetters then display it.                                         
 ************************************************************************/
int main()
{
   char text[256];
   char letter;

   cout << "Enter a letter: ";
   cin >> letter;
   cout << "Enter text: ";
   cin.ignore(256, '\n');
   cin.getline(text, 256);
   int numLetters = countLetters(text, letter);
   cout << "Number of \'" << letter << "\'s: " << numLetters << endl;
   return 0;
}
