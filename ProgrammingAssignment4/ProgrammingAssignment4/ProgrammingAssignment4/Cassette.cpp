// COSC 1320 Spring 2015
// Name: Jorge Gracia
// Programming Assignment 4
// This is my own work; I will not post
#include "Cassette.h"

#include <iostream>
#include <string>
using namespace std;


Cassette::Cassette(void)
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
	 producer= "UNKNOWN";
	 plays=0;

}

 void Cassette::setTitle(string newTitle){
		 title= newTitle;
		

	 }

	 string Cassette::getTitle(){
		 return title;
	 }

	 void Cassette::setArtist(string newArtist){
		 artist= newArtist;
	 }

	 string Cassette::getArtist(){
		 return artist;
	 }

	 void Cassette::setPlayingTime(string newTime){
		 playtime= newTime;
	 }

	 string Cassette::getPlayTime(){
		 return playtime;
	 }

	 void Cassette::setPrice(double newprice){
		 price=newprice;
	 }

	 double Cassette::getPrice(){
		 return price;
	 }

	 void Cassette::setNumberofPlays(int newPlays){
		 plays=newPlays;
	 }

	 int Cassette::getNumberofPlays(){
		 return plays;
	 }

	 void Cassette::setRating(string newRating){
		 rating=newRating;
	 }
	 string Cassette::getRating(){
		 return rating;
	 }

	 void Cassette::setProducer(string newProducer){
		 producer= newProducer;
	 }

	 string Cassette::getProducer(){
		 return producer;
	 }

	 void Cassette::setNumberofTracks(int newNumber){
		 numberoftracks=newNumber;
	 }

	 int Cassette::getNumberofTracks(){
		 return numberoftracks;
	 }

	 void Cassette::setTracks(string newtracks[]){
		 for(int i=0;i<100; i++){
			tracks[i]=newtracks[i];
		 }
	 }
void Cassette::getTracks(string newtracks[]){
	for(int i=0;i<100;i++){
		newtracks[i]=tracks[i];
	}

}

string Cassette:: toString(){
	string temp=to_string((_ULonglong)price);
	string temp2=to_string((_ULonglong)plays);
	string temp3=to_string((_ULonglong)numberoftracks);
	return "Casette\r\nTitle:"+title+"\r\nMajor_Artist:"+artist+"\r\nPlaying_Time:"+
		playtime+"\r\nPrice: "+temp+"\r\nNum_plays: "+temp2+"\r\nRating:"+rating+
		"\r\nProducer:"+producer+"\r\nNum_tracks: "+temp3+"\r\n";
}

Cassette::~Cassette(void)
{
}
