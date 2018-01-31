// Name: Jorge Gracia
// Programming Assignment 4

#include "ProgrammingAssignment4.h"
#include "View.h"
#include "Controller.h"
#include <iostream>
using namespace std;

void main(){
	View view;
	int answer;
	string response;
	Controller controller;
	controller.UCLoadData();
	do{
		view.showSelection();
		getline(std::cin, response);
		answer=int(response.c_str());
		switch(answer){
		case 1:
			controller.UCAddEntry();
			break;
		case 2:
			controller.UCRemoveEntry();
			break;
		case 3:
			controller.UCDisplayArtist();
			break;
		case 4:
			controller.UCLookupTitle();
			break;
		case 5:
			controller.UCLookupArtist();
			break;
		case 6:
			controller.UCSaveData();
		case 7:
			break;
		}
			
	}while(answer!=7);
	
}