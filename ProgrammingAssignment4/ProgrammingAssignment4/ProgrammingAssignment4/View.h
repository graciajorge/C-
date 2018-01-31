// COSC 1320 Spring 2015
// Name: Jorge Gracia
// Programming Assignment 4
// This is my own work; I will not post


#ifndef VIEWF_H
#define VIEW_H

#include <iostream>
using namespace std;

class View
{
public:
	View(void);
	void showSelection(){
		cout<<"*******************************************************************************\n";
		cout<<"******************* Remember to save your changes *****************************\n";
		cout<<"************ Please chose one of the options listed below *********************\n";
		cout<<"*******************************************************************************\n";

		cout<<"\n1)Add Entry\n"<<"2)Remove Entry\n"<<"3)Display by Artist\n"<<"4)Look up by Title\n"
			<<"5)Look up by artist\n"<<"6)Save\n"<<"7)Exit\n"<<"choice: ";
	}
	~View(void);
};
#endif
