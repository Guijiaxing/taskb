/** 
	@file count.cc
**/
#include "count.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
void count::countChar(){
	ifstream fin;
	fin.open("123.txt");
	char pName;
	int count=0;
	while(!fin.eof()){
		fin.get(pName);
		count++;}
	if(count == 1){
		cout<<"Athens"<<endl;}
	else{
		count = count-1;
		cout<<count<<"Characters"<<endl;}
	fin.close();}

void count::countLine(){
	ifstream fin;
	fin.open("123.txt");
	char pName[99];
	int line=0;
	while(!fin.eof()){
		fin.getline(pName,99);
		line++;}
	if(line == 1){
		cout<<"Ohio University"<<endl;}
	else{
		line = line-1;
		cout<<line<<"Lines"<<endl;}
	fin.close();}
