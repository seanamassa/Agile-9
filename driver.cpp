#include <iostream>
#include <windows.h>
using namespace std;

void featureA();
void featureB();
void featureC();
void featureD();

int main()
{
  cout << "Welcome to our project." << endl;
  
  // might want to add something here to fill 
  cout << "Here are the names of our project members." << endl;
  
  featureA();
  featureB();
  featureC();
  featureD();

  return 0;
}
