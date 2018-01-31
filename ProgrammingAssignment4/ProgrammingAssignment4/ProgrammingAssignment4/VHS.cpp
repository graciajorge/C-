// COSC 1320 Spring 2015
// Name: Jorge Gracia
// Programming Assignment 4
// This is my own work; I will not post
#include "VHS.h"



VHS::VHS(void)
{
	title="UNKNOWN";
	plays=0;
	price=0.0;
	 for(int i=0; i<100; i++){
			 supporting[i]="UKNOWN";
		 }
	 artist="UNKNOWN";
	 rating="UNKNOWN";
	 numberofsupport=0;
	 trailers="0";
	 producer= "UKNOWN";
	 director="UNKOWN";
	 plays=0;

}
void VHS::setTitle(string newTitle){
		 title= newTitle;
		

	 }

string VHS::getTitle(){
		 return title;
	 }

void VHS::setArtist(string newArtist){
		 artist= newArtist;
	 }

string VHS::getArtist(){
		 return artist;
	 }

void VHS::setPlayingTime(string newTime){
		 playtime= newTime;
	 }

string VHS::getPlayTime(){
		 return playtime;
	 }

void VHS::setPrice(double newprice){
		 price=newprice;
	 }

double VHS::getPrice(){
		 return price;
	 }

void VHS::setNumberofPlays(int newPlays){
		 plays=newPlays;
	 }

int VHS::getNumberofPlays(){
		 return plays;
	 }

void VHS::setRating(string newRating){
		 rating=newRating;
	 }
string VHS::getRating(){
		 return rating;
	 }

void VHS::setProducer(string newProducer){
		 producer= newProducer;
	 }

string VHS::getProducer(){
		 return producer;
	 }
void VHS::setDirector(string newDirector){
	director= newDirector;
}
string VHS::getDirector(){
	return director;
}
void VHS::setnumberSupport(string newSupport){
	numberofsupport= atof(newSupport.c_str());
}
int VHS::getnumberSupport(){
	return numberofsupport;
}

void VHS::setSupport(string newSupport[]){
	 for(int i=0;i<100; i++){
			supporting[i]=newSupport[i];
		 }
}
void VHS::getSupport(string newsupport[]){
	for(int i=0;i<100;i++){
		newsupport[i]=supporting[i];
	}
}
void VHS::setnumberofTrailers(string newnumber){
	trailers=newnumber;
}
string VHS::getnumberofTrailers(){
	return trailers;
}
string VHS::toString(){
	string temp=to_string((long double)price);
	string temp2=to_string((_ULonglong)plays);
	string temp3=to_string((_ULonglong)numberofsupport);

	return "VHS\r\nTitle:"+title+"\r\nMajor_Artist:"+artist+"\r\nPlaying_Time:"+
		playtime+"\r\nPrice: "+temp+"\r\nNum_plays: "+temp2+"\r\nRating:"+rating+
		"\r\nDirector:"+director+"\r\nProducer:"+producer+"\r\nNum_supporting_Actors: "+
		temp3+"\r\n";
}
VHS::~VHS(void)
{
}
