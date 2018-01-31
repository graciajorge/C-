// COSC 1320 Spring 2015
// Name: Jorge Gracia
// Programming Assignment 4
// This is my own work; I will not post
#pragma once
#include "Cassette.h"
#include "CD.h"
#include "DVD.h"
#include "VHS.h"
class Catalog
{
private:
	static const int MAX_SIZE=5;
	Cassette cassette[MAX_SIZE];
	CD cd[MAX_SIZE];
	DVD dvd[MAX_SIZE];
	VHS vhs[MAX_SIZE];
public:
	Catalog(void);
	void LoadData();
	void AddEntry();
	void RemoveEntry();
	void DisplayArtist();
	void LookupTitle();
	void LookupArtist();
	void SaveData();


	~Catalog(void);
};

