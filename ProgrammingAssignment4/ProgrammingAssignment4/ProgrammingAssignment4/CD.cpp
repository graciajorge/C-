// COSC 1320 Spring 2015
// Name: Jorge Gracia
// Programming Assignment 4
// This is my own work; I will not post
#include "CD.h"
#include <iostream>
#include <string>
using namespace std;


CD::CD(void)
{
	title="UNKNOWN";
	plays=0;
	price=0.0;
	 for(int i=0; i<100; i++){
			 tracks[i]="UKNOWN";
		 }
	 artist="UNKNOWN";
	 rating="UNKNOWN";
	 numberoftracks=0;
	 producer= "UKNOWN";
	 plays=0;

}
	 void CD::setTitle(string newTitle){
		 title= newTitle;
		

	 }

	 string CD::getTitle(){
		 return title;
	 }

	 void CD::setArtist(string newArtist){
		 artist= newArtist;
	 }

	 string CD::getArtist(){
		 return artist;
	 }

	 void CD::setPlayingTime(string newTime){
		 playtime= newTime;
	 }

	 string CD::getPlayTime(){
		 return playtime;
	 }

	 void CD::setPrice(double newprice){
		 price=newprice;
	 }

	 double CD::getPrice(){
		 return price;
	 }

	 void CD::setNumberofPlays(int newPlays){
		 plays=newPlays;
	 }

	 int CD::getNumberofPlays(){
		 return plays;
	 }

	 void CD::setRating(string newRating){
		 rating=newRating;
	 }
	 string CD::getRating(){
		 return rating;
	 }

	 void CD::setProducer(string newProducer){
		 producer= newProducer;
	 }

	 string CD::getProducer(){
		 return producer;
	 }

	 void CD::setNumberofTracks(int newNumber){
		 numberoftracks=newNumber;
	 }

	 int CD::getNumberofTracks(){
		 return numberoftracks;
	 }

	 void CD::setTracks(string newtracks[]){
		 
		 for(int i=0;i<100; i++){
			tracks[i]=newtracks[i];
		 }
	 }
void CD::getTracks(string newtracks[]){

	for(int i=0;i<100;i++){
		newtracks[i]=tracks[i];
	}
	
}

string CD:: toString(){
	string temp=to_string((long double)price);
	string temp2=to_string((_ULonglong)plays);
	string temp3=to_string((_ULonglong)numberoftracks);
	return "CD\r\nTitle:"+title+"\r\nMajor_Artist:"+artist+"\r\nPlaying_Time:"+
		playtime+"\r\nPrice: "+temp+"\r\nNum_plays :"+temp2+"\r\nRating:"+rating+
		"\r\nProducer:"+producer+"\r\nNum_tracks: "+temp3+"\r\n";
}

CD::~CD(void)
{
}
