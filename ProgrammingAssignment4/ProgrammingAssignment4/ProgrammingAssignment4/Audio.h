// COSC 1320 Spring 2015
// Name: Jorge Gracia
// Programming Assignment 4
// This is my own work; I will not post
#pragma once
#include <iostream>
using namespace std;
#include "Media.h"
class Audio:public Media//Abstracct
{
private:
	

public:
	Audio();


	virtual void setNumberofPlays(int newPlays)=0;
	virtual int getNumberofPlays()=0;
	virtual void setRating(string newRating)=0;
	virtual string getRating()=0;	
	virtual void setProducer(string newProducer)=0;
	virtual string getProducer()=0;
	virtual void setNumberofTracks(int newNumber)=0;
	virtual int getNumberofTracks()=0;
	virtual void setTracks(string newtracks[])=0;
	virtual void getTracks(string newtracks[])=0;

	

	~Audio();

};

