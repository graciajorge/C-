// COSC 1320 Spring 2015
// Name: Jorge Gracia
// Programming Assignment 4
// This is my own work; I will not post
#pragma once
#include "Media.h"
#include <iostream>
using namespace std;

class Video:public Media 
{
public:
	virtual void setNumberofPlays(int newPlays)=0;
	virtual int getNumberofPlays()=0;
	virtual void setRating(string newRating)=0;
	virtual string getRating()=0;	
	virtual void setDirector(string newDirector)=0;
	virtual string getDirector()=0;
	virtual void setProducer(string newProducer)=0;
	virtual string getProducer()=0;
	virtual void setnumberSupport(string newSupport)=0;
	virtual int getnumberSupport()=0;
	virtual void setSupport(string newSupport[])=0;
	virtual void getSupport(string newsupport[])=0;
	
	

	Video(void);
	~Video(void);
};

