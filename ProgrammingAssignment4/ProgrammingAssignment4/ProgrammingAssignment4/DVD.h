// COSC 1320 Spring 2015
// Name: Jorge Gracia
// Programming Assignment 4
// This is my own work; I will not post
#pragma once
#include <iostream>
using namespace std;
#include "Video.h"

class DVD: public Video
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
	int numberofsupport;
	string supporting[100];
	string features[100];
	string sound[100];
	string widescreen;
	string tvformat;
	int numberoffeatures;
	int numberofsound;
	

public:
	DVD(void);
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
	 void setwideScreen(string newwideScreen);
	 string getwideScreen();
	 void settvFormat(string newFormat);
	 string gettvFormat();
	 void setnumberFeatures(string newnumber);
	 int getnumberFeatures();
	 void setnumberofSound(string newnumber);
	 int getnumberofSound();
	 void setFeatures(string newFeatures[]);
	 void getFeatures(string newFeatures[]);
	 void setSound(string newSound[]);
	 void getSound(string newSound[]);
	 string toString();
	~DVD(void);
};

