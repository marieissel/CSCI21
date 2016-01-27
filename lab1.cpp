/*
 * Name        : lab_1.cpp
 * Author      : Marie Issel
 * Date        : 1-27-16
 * Description : Our First Lab of the Semester!
 */
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
string checkExperience (char hasExperience);

/*
 * Create a program based on the comments below
 * @param none
 * @return none
 */
void FirstLab() {
  string first_name;

  char programmed_before = 'z';
  char my_character = 'z';
  string passed;

  cout << "Welcome, user!" << endl; 

  cout << "What is your first name? "; 

  cin >> first_name; 

  cout << endl << "Nice to meet you, " << first_name << endl; 

  cout << "Have you programmed before? (y/n) "; 

  cin >> programmed_before; 

  passed = checkExperience(programmed_before); 

  cout << endl << passed << endl;
}


string checkExperience (char hasExperience) 
{
   if (hasExperience == 'y')
   {
   return string("Welcome back");
   }
   if (hasExperience == 'n')
   {
   return string("Get ready to have some fun");
   }
    
}

int main()
{
  FirstLab();
  return 0;
}