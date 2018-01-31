// COSC 1320 Spring 2015
// Name: Jorge Gracia
// Programming Assignment 4
// This is my own work; I will not post

#include "Controller.h"


Controller::Controller(void)
{
}
void Controller:: UCLoadData(){
	catalog.LoadData();
}
void Controller:: UCAddEntry(){
	catalog.AddEntry();
}

void Controller:: UCRemoveEntry(){
	catalog.RemoveEntry();
}
void Controller:: UCDisplayArtist(){
	catalog.DisplayArtist();
}
void Controller:: UCLookupTitle(){
	catalog.LookupTitle();
}
void Controller:: UCLookupArtist(){
	catalog.LookupArtist();
}

void Controller:: UCSaveData(){
	catalog.SaveData();
}

Controller::~Controller(void)
{
}
