// COSC 1320 Spring 2015
// Name: Jorge Gracia
// Programming Assignment 4
// This is my own work; I will not post
#pragma once
#include "Audio.h"
#include <iostream>
using namespace std;

class Cassette:public Audio
{
private:
	string title;
	string artist;
	string playtime;
	double price;
	int plays;
	string rating;
	string producer;
	int numberoftracks;
	string tracks[100];
public:
	Cassette(void);
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
	 string getawesome();
	 void setNumberofTracks(int newNumber);
	 int getNumberofTracks();
	 void setTracks(string newtracks[]);
	 void getTracks(string newtracks[]);
	 string toString();
	~Cassette(void);
};

