/** 
	@file main.cc
	@brief this file runs the program.
**/
#include <iostream>
#include <string>
#include <fstream>
#include "count.h"
using namespace std;
/**
	@brief this is the main function that runs the program
**/
int main(){
  count a;
  a.countLine();
  a.countChar();
  return 0;
}
