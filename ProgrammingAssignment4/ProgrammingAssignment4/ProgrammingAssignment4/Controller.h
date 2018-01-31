// COSC 1320 Spring 2015
// Name: Jorge Gracia
// Programming Assignment 4
// This is my own work; I will not post
#pragma once
#include "Catalog.h"

class Controller
{
private:
	Catalog catalog;
public:
	Controller(void);
	void UCLoadData();
	void UCAddEntry();
	void UCRemoveEntry();
	void UCDisplayArtist();
	void UCLookupTitle();
	void UCLookupArtist();
	void UCSaveData();
	~Controller(void);
};
