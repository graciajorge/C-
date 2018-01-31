// COSC 1320 Spring 2015
// Name: Jorge Gracia
// Programming Assignment 4
// This is my own work; I will not post
#pragma once
#include <iostream>
#include <string>
#include "Video.h"
using namespace std;

class VHS
{
private:
	string title;
	string artist;
	string playtime;
	double price;
	int plays;
	string rating;
	string producer;
	string director;
	string trailers;
	int numberofsupport;
	string supporting[100];
public:
	VHS(void);
	void setTitle(string newTitle);
	 string getTitle();
	 void setArtist(string newArtist);
	 string getArtist();
	 void setPlayingTime(string newTime);
	 string getPlayTime();
	 void setPrice(double newprice);
	 double getPrice();
	void setNumberofPlays(int newPlays);
	 int getNumberofPlays();
	 void setRating(string newRating);
	 string getRating();	
	 void setProducer(string newProducer);
	 string getProducer();
	 void setDirector(string newDirector);
	 string getDirector();
	 void setnumberSupport(string newSupport);
	 int getnumberSupport();
	 void setSupport(string newSupport[]);
	 void getSupport(string newsupport[]);
	 void setnumberofTrailers(string newnumber);
	 string getnumberofTrailers();
	 string toString();
	~VHS(void);
};

