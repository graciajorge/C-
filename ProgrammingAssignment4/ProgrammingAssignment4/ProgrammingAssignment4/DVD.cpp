// COSC 1320 Spring 2015
// Name: Jorge Gracia
// Programming Assignment 4
// This is my own work; I will not post
#include "DVD.h"
#include<iostream>
#include <string>
using namespace std;



DVD::DVD(void)
{
	title="UNKNOWN";
	plays=0;
	price=0.0;
	 for(int i=0; i<100; i++){
	supporting[i]="UNKNOWN";

	features[i]="UNKNOWN";
	 sound[i]="UNKNOWN";
		 }
	 artist="UNKNOWN";
	 rating="UNKNOWN";
	 numberofsupport=0;
	 string widescreen="false";
	string tvformat="false";
	numberoffeatures=0;
	numberofsound=0;
	 producer= "UKNOWN";
	 director="UNKOWN";
	 plays=0;

}
void DVD::setTitle(string newTitle){
		 title= newTitle;
		

	 }

string DVD::getTitle(){
		 return title;
	 }

void DVD::setArtist(string newArtist){
		 artist= newArtist;
	 }

string DVD::getArtist(){
		 return artist;
	 }

void DVD::setPlayingTime(string newTime){
		 playtime= newTime;
	 }

string DVD::getPlayTime(){
		 return playtime;
	 }

void DVD::setPrice(double newprice){
		 price=newprice;
	 }

double DVD::getPrice(){
		 return price;
	 }

void DVD::setNumberofPlays(int newPlays){
		 plays=newPlays;
	 }

int DVD::getNumberofPlays(){
		 return plays;
	 }

void DVD::setRating(string newRating){
		 rating=newRating;
	 }
string DVD::getRating(){
		 return rating;
	 }

void DVD::setProducer(string newProducer){
		 producer= newProducer;
	 }

string DVD::getProducer(){
		 return producer;
	 }
void DVD::setDirector(string newDirector){
	director= newDirector;
}
string DVD::getDirector(){
	return director;
}
void DVD::setnumberSupport(string newSupport){
	numberofsupport= atof(newSupport.c_str());
}
int DVD::getnumberSupport(){
	return numberofsupport;
}

void DVD::setSupport(string newSupport[]){
	 for(int i=0;i<100; i++){
			supporting[i]=newSupport[i];
		 }
}
void DVD::getSupport(string newsupport[]){
	for(int i=0;i<100;i++){
		newsupport[i]=supporting[i];
	}
}
void DVD::setwideScreen(string newwideScreen){
	widescreen= newwideScreen;
}

string DVD::getwideScreen(){
	return widescreen;
}

void DVD::settvFormat(string newFormat){
	tvformat=newFormat;
}
string DVD::gettvFormat(){
	return tvformat;
}

void DVD::setnumberFeatures(string newnumber){
	numberoffeatures= atof(newnumber.c_str());

}

int DVD::getnumberFeatures(){
	return numberoffeatures;
}

void DVD::setnumberofSound(string newnumber){
	numberofsound= atof(newnumber.c_str());
}
int DVD::getnumberofSound(){
	return numberofsound;
}
void DVD::setFeatures(string newFeatures[]){
	 for(int i=0;i<100; i++){
			features[i]=newFeatures[i];
		 }
}
void DVD::getFeatures(string newFeatures[]){
	for(int i=0;i<100;i++){
		newFeatures[i]=features[i];
	}
}
void DVD::setSound(string newSound[]){
	for(int i=0;i<100; i++){
			sound[i]=newSound[i];
		 }
}
void DVD::getSound(string newSound[]){
	for(int i=0;i<100;i++){
		newSound[i]=sound[i];
	}

}

string DVD::toString(){
	string temp=to_string((long double)price);
	string temp2=to_string((_ULonglong)plays);
	string temp3=to_string((_ULonglong)numberofsupport);

	return "DVD\r\nTitle:"+title+"\r\nMajor_Artist:"+artist+"\r\nPlaying_Time:"+
		playtime+"\r\nPrice: "+temp+"\r\nNum_plays:"+temp2+"\r\nRating:"+rating+
		"\r\nDirector:"+director+"\r\nProducer:"+producer+"\r\nNum_supporting_Actors:"+
		temp3+"\r\n";
}

DVD::~DVD(void)
{
}
