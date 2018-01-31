// COSC 1320 Spring 2015
// Name: Jorge Gracia
// Programming Assignment 4
// This is my own work; I will not post
#pragma once
#include <iostream>
using namespace std;

class Media
{
private:
	
public:
	Media(void);
	virtual void setTitle(string newTitle)=0;
	virtual string getTitle()=0;
	virtual void setArtist(string newArtist)=0;
	virtual string getArtist()=0;
	virtual void setPlayingTime(string newTime)=0;
	virtual string getPlayTime()=0;
	virtual void setPrice(double newprice)=0;
	virtual double getPrice()=0;

	~Media(void);
};

