// COSC 1320 Spring 2015
// Name: Jorge Gracia
// Programming Assignment 4
// This is my own work; I will not post
#include "Catalog.h"
#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


Catalog::Catalog(void)
{
}

void Catalog::LoadData(){
	//these will hold the slots for the arrays, cd, casette
	// dvd and vhs
	int obj1, obj2, obj3, obj4;
	obj1=0;
	obj2=0;
	obj3=0;
	obj4=0;
	//in case of the cassette or vhs doesn't have any tracks
	string line,line1, line2,line3,line4;
	string tracks[100];
	string support[100];
	string sound[100];
	string features[100];
	for( int i=0;i<100; i++){
		tracks[i]="EMPTY";
		support[i]="EMPTY";
		sound[i]="EMPTY";
		features[i]="EMPTY";
	}
        
		ifstream myfile;
	   myfile.open("Programming Assignment 4 Data.txt");
	   //checking if my file can open correctly before starting
	   if(myfile.fail())
		   exit(EXIT_FAILURE);
	  
	   do {
		   
		   myfile>>line;
		   if (line.compare("CD")==0){
			myfile>>line;
			getline(myfile,line1);
			cd[obj1].setTitle(line1);
			myfile>>line;
			getline(myfile, line1);
			cd[obj1].setArtist(line1);
			myfile>>line;
			getline(myfile, line1);
			cd[obj1].setPlayingTime(line1);
			myfile>>line;
			getline(myfile, line1);
			double num = atof(line1.c_str());
			cd[obj1].setPrice(num);
			myfile>>line;
			getline(myfile, line1);
			int num1 = atof(line1.c_str());
			cd[obj1].setNumberofPlays(num1);
			myfile>>line;
			getline(myfile, line1);
			cd[obj1].setRating(line1);
			myfile>>line;
			getline(myfile, line1);
			cd[obj1].setProducer(line1);
			myfile>>line;
			getline(myfile, line1);
			int num2 = atof(line1.c_str());
			cd[obj1].setNumberofTracks(num2);
			for(int i=0;i<num2; i++){
				getline(myfile, line2);
				tracks[i]=line2;
			
			}
			if(cd[obj1].getNumberofTracks()!=0)
			cd[obj1].setTracks(tracks);
			
			obj1++;
			
			
	
		   }
	 if (line.compare("Cassette")==0){
			myfile>>line;
			getline(myfile,line1);
			cassette[obj2].setTitle(line1);
			myfile>>line;
			getline(myfile, line1);
			cassette[obj2].setArtist(line1);
			myfile>>line;
			getline(myfile, line1);
			cassette[obj2].setPlayingTime(line1);
			myfile>>line;
			getline(myfile, line1);
			double num = atof(line1.c_str());
			cassette[obj2].setPrice(num);
			myfile>>line;
			getline(myfile, line1);
			int num1 = atof(line1.c_str());
			cassette[obj2].setNumberofPlays(num1);
			myfile>>line;
			getline(myfile, line1);
			cassette[obj2].setRating(line1);
			myfile>>line;
			getline(myfile, line1);
			cassette[obj2].setProducer(line1);
			myfile>>line;
			getline(myfile, line1);
			int num2 = atof(line1.c_str());
			cassette[obj2].setNumberofTracks(num2);
			for(int i=0;i<num2; i++){
				getline(myfile, line2);
				tracks[i]=line2;
				
			}
			if(cassette[obj2].getNumberofTracks()!=0)
			cassette[obj2].setTracks(tracks);
			
			obj2++;
			
	 }
		if (line.compare("DVD")==0){
			myfile>>line;
			getline(myfile,line1);
			dvd[obj3].setTitle(line1);
			myfile>>line;
			getline(myfile, line1);
			dvd[obj3].setArtist(line1);
			myfile>>line;
			getline(myfile, line1);
			dvd[obj3].setPlayingTime(line1);
			myfile>>line;
			getline(myfile, line1);
			double num = atof(line1.c_str());
			dvd[obj3].setPrice(num);
			myfile>>line;
			getline(myfile, line1);
			int num1 = atof(line1.c_str());
			dvd[obj3].setNumberofPlays(num1);
			myfile>>line;
			getline(myfile, line1);
			dvd[obj3].setRating(line1);
			myfile>>line;
			getline(myfile, line1);
			dvd[obj3].setDirector(line1);
			myfile>>line;
			getline(myfile, line1);
			dvd[obj3].setProducer(line1);
			myfile>>line;
			getline(myfile, line1);
			dvd[obj3].setnumberSupport(line1);
			for(int i=0;i<dvd[obj3].getnumberSupport(); i++){
				getline(myfile, line2);
				support[i]=line2;
				}
			myfile>>line;
			getline(myfile, line1);
			dvd[obj3].setwideScreen(line1);
			myfile>>line;
			getline(myfile, line1);
			dvd[obj3].settvFormat(line1);
			myfile>>line;
			getline(myfile, line1);
			dvd[obj3].setnumberFeatures(line1);
			for(int i=0;i<dvd[obj3].getnumberFeatures(); i++){
				getline(myfile, line2);
				features[i]=line2;
				}
			myfile>>line;
			getline(myfile, line1);
			dvd[obj3].setnumberofSound(line1);
			for(int i=0;i<dvd[obj3].getnumberofSound(); i++){
				getline(myfile, line2);
				sound[i]=line2;
				}
			if(dvd[obj3].getnumberSupport()!=0)
				dvd[obj3].setSupport(support);
			if(dvd[obj3].getnumberFeatures()!=0)
				dvd[obj3].setFeatures(features);
			if(dvd[obj3].getnumberofSound()!=0)
				dvd[obj3].setSound(sound);

			
			obj3++;
			
	 } 
		if (line.compare("VHS")==0){
			myfile>>line;
			getline(myfile,line1);
			vhs[obj4].setTitle(line1);
			myfile>>line;
			getline(myfile, line1);
			vhs[obj4].setArtist(line1);
			myfile>>line;
			getline(myfile, line1);
			vhs[obj4].setPlayingTime(line1);
			myfile>>line;
			getline(myfile, line1);
			double num = atof(line1.c_str());
			vhs[obj4].setPrice(num);
			myfile>>line;
			getline(myfile, line1);
			int num1 = atof(line1.c_str());
			vhs[obj4].setNumberofPlays(num1);
			myfile>>line;
			getline(myfile, line1);
			vhs[obj4].setRating(line1);
			myfile>>line;
			getline(myfile, line1);
			vhs[obj4].setDirector(line1);
			myfile>>line;
			getline(myfile, line1);
			vhs[obj4].setProducer(line1);
			myfile>>line;
			getline(myfile, line1);
			vhs[obj4].setnumberSupport(line1);
			for(int i=0;i<vhs[obj4].getnumberSupport(); i++){
				getline(myfile, line2);
				support[i]=line2;
				}
			myfile>>line;
			getline(myfile, line1);
			vhs[obj4].setnumberofTrailers(line1);
			if(vhs[obj4].getnumberSupport()!=0)
				vhs[obj4].setSupport(support);
			obj4++;
		}
	   }while(!myfile.eof());


	
}


void Catalog:: AddEntry(){
	string response;
	string track[100];
	string support[100];
	string features[100];
	string sound[100];
	cout<<"Hello what Type of media would you like to add (VHS, CD, DVD, Cassette)?"<<endl;
	
	getline(std::cin, response);
	if(response.compare("Cassette")==0){
		for(int i=0;i<5;i++){
	if(cassette[i].getArtist()=="DELETED"||cassette[i].getArtist()=="UNKNOWN"){
			cout<<"\nPlease enter the Title"<<endl;
			getline(std::cin, response);
			response= " "+response;
			cassette[i].setTitle(response);
			cout<<"\nPlease enter the Major Artist"<<endl;
			getline(std::cin, response);
			response= " "+response;
			cassette[i].setArtist(response);
			cout<<"\nPlease enter the playing time (ex:125)"<<endl;
			getline(std::cin, response);
			response= " "+response;
			cassette[i].setPlayingTime(response);
			cout<<"\nPlease enter the price (ex:12.50)"<<endl;
			getline(std::cin, response);
			double num = atof(response.c_str());
			cassette[i].setPrice(num);
			cout<<"\nPlease enter the number of plays (ex:5)"<<endl;
			getline(std::cin, response);
			int num1 = atof(response.c_str());
			cassette[i].setNumberofPlays(num1);
			cout<<"\nPlease enter the rating"<<endl;
			getline(std::cin, response);
			response= " "+response;
			cassette[i].setRating(response);
			cout<<"\nPlease enter the name of the producer"<<endl;
			getline(std::cin, response);
			response= " "+response;
			cassette[i].setProducer(response);
			cout<<"\nPlease enter the number of tracks"<<endl;
			getline(std::cin, response);
		
			int tracks=atof(response.c_str());
			cassette[i].setNumberofTracks(tracks);
			for(int j=0;j<cassette[i].getNumberofTracks();j++){
				cout<<"\nPlease enter a track in quotes\n"<<
					" followed by length of the track (ex:'Track' 650)"<<endl;
				getline(std::cin, response);
				track[j]=response;
			}
			cassette[i].setTracks(track);
			break;
		}	
		}
	}
	if(response.compare("CD")==0){
		
		for(int i=0;i<5;i++){
	if(cd[i].getArtist()=="DELETED"||cd[i].getArtist()=="UNKNOWN"){
		
			cout<<"\nPlease enter the Title"<<endl;
			getline(std::cin, response);
			response= " "+response;
			cd[i].setTitle(response);
			cout<<"\nPlease enter the Major Artist"<<endl;
			getline(std::cin, response);
			response= " "+response;
			cd[i].setArtist(response);
			cout<<"\nPlease enter the playing time (ex:125)"<<endl;
			getline(std::cin, response);
			response= " "+response;
			cd[i].setPlayingTime(response);
			cout<<"\nPlease enter the price (ex:12.50)"<<endl;
			getline(std::cin, response);
			double num = atof(response.c_str());
			cd[i].setPrice(num);
			cout<<"\nPlease enter the number of plays (ex:5)"<<endl;
			getline(std::cin, response);
			int num1 = atof(response.c_str());
			cd[i].setNumberofPlays(num1);
			cout<<"\nPlease enter the rating"<<endl;
			getline(std::cin, response);
			response= " "+response;
			cd[i].setRating(response);
			cout<<"\nPlease enter the name of the producer"<<endl;
			getline(std::cin, response);
			response= " "+response;
			cd[i].setProducer(response);
			cout<<"\nPlease enter the number of tracks"<<endl;
			getline(std::cin, response);
			int tracks=atof(response.c_str());
			cd[i].setNumberofTracks(tracks);
			for(int j=0;j<cd[i].getNumberofTracks();j++){
				cout<<"\nPlease enter a track in quotes\n"<<
					" followed by length of the track (ex:'Track' 650)"<<endl;
				getline(std::cin, response);
				track[j]=response;
			}
			cd[i].setTracks(track);
			break;
		}	
		}
	}
		if(response.compare("DVD")==0){
		for(int i=0;i<5;i++){
	if(dvd[i].getArtist()=="DELETED"||dvd[i].getArtist()=="UNKNOWN"){
			cout<<"\nPlease enter the Title"<<endl;
			getline(std::cin, response);
			response= " "+response;
			dvd[i].setTitle(response);
			cout<<"\nPlease enter the Major Artist"<<endl;
			getline(std::cin, response);
			response= " "+response;
			dvd[i].setArtist(response);
			cout<<"\nPlease enter the playing time (ex:125)"<<endl;
			getline(std::cin, response);
			response= " "+response;
			dvd[i].setPlayingTime(response);
			cout<<"\nPlease enter the price (ex:12.50)"<<endl;
			getline(std::cin, response);
			double num = atof(response.c_str());
			dvd[i].setPrice(num);
			cout<<"\nPlease enter the number of plays (ex:5)"<<endl;
			getline(std::cin, response);
			int num1 = atof(response.c_str());
			dvd[i].setNumberofPlays(num1);
			cout<<"\nPlease enter the rating"<<endl;
			getline(std::cin, response);
			response= " "+response;
			dvd[i].setRating(response);
			cout<<"\nPlease enter the name of the director"<<endl;
			getline(std::cin, response);
			response= " "+response;
			dvd[i].setDirector(response);
			cout<<"\nPlease enter the name of the producer"<<endl;
			getline(std::cin, response);
			response= " "+response;
			dvd[i].setProducer(response);
			cout<<"\nPlease enter the number of supporting actors"<<endl;
			getline(std::cin, response);
			dvd[i].setnumberSupport(response);
			for(int j=0;j<dvd[i].getnumberSupport();j++){
				cout<<"\nPlease enter a supporting artist"<<endl;
				getline(std::cin, response);
				support[j]=response;
			}
			dvd[i].setSupport(support);
			cout<<"\nPlease enter enter true or false\n"<<
				"if the movie supports widescreen"<<endl;
			getline(std::cin, response);
			response= " "+response;
			dvd[i].setwideScreen(response);
			cout<<"\nPlease enter enter true or false\n"<<
				"if the movie supports tv format"<<endl;
			getline(std::cin, response);
			response= " "+response;
			dvd[i].settvFormat(response);
			cout<<"\nPlease enter the number of special features"<<endl;
			getline(std::cin, response);
			dvd[i].setnumberFeatures(response);
			for(int j=0;j<dvd[i].getnumberFeatures();j++){
				cout<<"\nPlease enter a feature"<<endl;
				getline(std::cin, response);
				features[j]=response;
			}
			dvd[i].setFeatures(features);
			cout<<"\nPlease enter the number of sound options"<<endl;
			getline(std::cin, response);
			dvd[i].setnumberofSound(response);
			for(int j=0;j<dvd[i].getnumberofSound();j++){
				cout<<"\nPlease enter a sound option"<<endl;
				getline(std::cin, response);
				sound[j]=response;
			}
			dvd[i].setSound(sound);
			break;
		}

		}
	}
		if(response.compare("VHS")==0){
			
		for(int i=0;i<5;i++){
	if(vhs[i].getArtist()=="DELETED"||vhs[i].getArtist()=="UNKNOWN"){
			cout<<"\nPlease enter the Title"<<endl;
		    getline(std::cin, response);
			response=" "+response;
			vhs[i].setTitle(response);
			cout<<"\nPlease enter the Major Artist"<<endl;
			getline(std::cin, response);
			response= " "+response;
			vhs[i].setArtist(response);
			cout<<"\nPlease enter the playing time (ex:125)"<<endl;
			getline(std::cin, response);
			response=" "+response;
			vhs[i].setPlayingTime(response);
			cout<<"\nPlease enter the price (ex:12.50)"<<endl;
			getline(std::cin, response);
			double num = atof(response.c_str());
			vhs[i].setPrice(num);
			cout<<"\nPlease enter the number of plays (ex:5)"<<endl;
			getline(std::cin, response);
			int num1 = atof(response.c_str());
			vhs[i].setNumberofPlays(num1);
			cout<<"\nPlease enter the rating"<<endl;
			getline(std::cin, response);
			response=" "+response;
			vhs[i].setRating(response);
			cout<<"\nPlease enter the name of the director"<<endl;
			getline(std::cin, response);
			response=" "+response;
			vhs[i].setDirector(response);
			cout<<"\nPlease enter the name of the producer"<<endl;
			getline(std::cin, response);
			response=" "+response;
			vhs[i].setProducer(response);
			cout<<"\nPlease enter the number of supporting actors"<<endl;
			getline(std::cin, response);
			vhs[i].setnumberSupport(response);
			for(int j=0;j<vhs[i].getnumberSupport();j++){
				cout<<"\nPlease enter a supporting artist"<<endl;
				getline(std::cin, response);
				support[j]=response;
			}
			vhs[i].setSupport(support);
			cout<<"\nPlease enter the number of trailers"<<endl;
			getline(std::cin, response);
			response=" "+response;
			vhs[i].setnumberofTrailers(response);
			break;
		}

		}
	}
}
void Catalog::RemoveEntry(){
	string response;
	cout<<"\nPlease enter the title that you want to delete"<<endl;
	getline(std::cin, response);
	for(int i=0; i<MAX_SIZE; i++){
		if(vhs[i].getTitle().compare(" "+response)==0){
			vhs[i].setArtist("DELETED");
			vhs[i].setTitle("UNKNOWN");
		}
		if(dvd[i].getTitle().compare(" "+response)==0){
			dvd[i].setArtist("DELETED");
			dvd[i].setTitle("UNKNOWN");
		}
		if(cassette[i].getTitle().compare(" "+response)==0){
			cassette[i].setArtist("DELETED");
			cassette[i].setTitle("UNKNOWN");
		}
		if(cd[i].getTitle().compare(" "+response)==0){
			cd[i].setArtist("DELETED");
			cd[i].setTitle("UNKNOWN");
		}
	}

}
void Catalog::DisplayArtist(){
	string tracks[100];
	string support[100];
	string features[100];
	string sound[100];
	for(int i=0; i<5;i++){
		if(cassette[i].getArtist()!="DELETED"&&cassette[i].getTitle()!="UNKNOWN"){
			cout<<cassette[i].toString();
			cassette[i].getTracks(tracks);
			for(int j=0;j<cassette[i].getNumberofTracks();j++){
				cout<<tracks[j]<<endl;
			}
		}	
		if(cd[i].getArtist()!="DELETED"&&cd[i].getTitle()!="UNKNOWN"){
			cout<<cd[i].toString();
			cd[i].getTracks(tracks);
			for(int j=0;j<cd[i].getNumberofTracks();j++){
				cout<<tracks[j]<<endl;
			}	
		}
		if(dvd[i].getArtist()!="DELETED"&&dvd[i].getTitle()!="UNKNOWN"){
			cout<<dvd[i].toString();
			dvd[i].getSupport(support);
			for(int j=0;j<dvd[i].getnumberSupport();j++)
				cout<<support[j]<<endl;
			cout<<"Wide_Screen: "<<dvd[i].getwideScreen()<<endl;
			cout<<"TV_Format: "<<dvd[i].gettvFormat()<<endl;
			cout<<"Num_special_features: "<<dvd[i].getnumberFeatures()<<endl;
			dvd[i].getFeatures(features);
			for(int j=0;j<dvd[i].getnumberFeatures();j++)
				cout<<features[j]<<endl;
			cout<<"Num_sound_options: "<<dvd[i].getnumberofSound()<<endl;
			dvd[i].getSound(sound);
			for(int j=0;j<dvd[i].getnumberofSound();j++)
				cout<<sound[j]<<endl;
		}
		if(vhs[i].getArtist()!="DELETED"&&vhs[i].getTitle()!="UNKNOWN"){
			cout<<vhs[i].toString();
			vhs[i].getSupport(support);
			for(int j=0;j<vhs[i].getnumberSupport();j++)
				cout<<support[j]<<endl;
			cout<<"Num_Trailers:"<<vhs[i].getnumberofTrailers()<<endl;
		}
}
	system("pause");
}
void Catalog::LookupTitle(){
	string tracks[100];
	string support[100];
	string features[100];
	string sound[100];
	string response;
	cout<<"\nPlease enter the title that you want to look up"<<endl;
	getline(std::cin, response);
	for(int i=0; i<MAX_SIZE; i++){
		if(vhs[i].getTitle().compare(" "+response)==0){
			cout<<vhs[i].toString();
			vhs[i].getSupport(support);
			for(int j=0;j<vhs[i].getnumberSupport();j++)
				cout<<support[j]<<endl;
			cout<<"Num_Trailers:"<<vhs[i].getnumberofTrailers()<<endl;
			}

		
		if(dvd[i].getTitle().compare(" "+response)==0){
			cout<<dvd[i].toString();
			dvd[i].getSupport(support);
			for(int j=0;j<dvd[i].getnumberSupport();j++)
				cout<<support[j]<<endl;
			cout<<"Wide_Screen: "<<dvd[i].getwideScreen()<<endl;
			cout<<"TV_Format: "<<dvd[i].gettvFormat()<<endl;
			cout<<"Num_special_features: "<<dvd[i].getnumberFeatures()<<endl;
			dvd[i].getFeatures(features);
			for(int j=0;j<dvd[i].getnumberFeatures();j++)
				cout<<features[j]<<endl;
			cout<<"Num_sound_options: "<<dvd[i].getnumberofSound()<<endl;
			dvd[i].getSound(sound);
			for(int j=0;j<dvd[i].getnumberofSound();j++)
				cout<<sound[j]<<endl;
		}
		if(cassette[i].getTitle().compare(" "+response)==0){
			cout<<cassette[i].toString();
			cassette[i].getTracks(tracks);
			for(int j=0;j<cassette[i].getNumberofTracks();j++){
				cout<<tracks[j]<<endl;
		}
		}
		if(cd[i].getTitle().compare(" "+response)==0){
			cout<<cd[i].toString();
			cd[i].getTracks(tracks);
			for(int j=0;j<cd[i].getNumberofTracks();j++){
				cout<<tracks[j]<<endl;
			}	
		}
	}
	system("pause");
}
void Catalog::LookupArtist(){
	string tracks[100];
	string support[100];
	string features[100];
	string sound[100];
	string response;
	cout<<"\nPlease enter the Artist that you want to look up"<<endl;
	getline(std::cin, response);
	for(int i=0; i<MAX_SIZE; i++){
		if(vhs[i].getArtist().compare(" "+response)==0){
			cout<<vhs[i].toString();
			vhs[i].getSupport(support);
			for(int j=0;j<vhs[i].getnumberSupport();j++)
				cout<<support[j]<<endl;
			cout<<"Num_Trailers:"<<vhs[i].getnumberofTrailers()<<endl;
			}

		
		if(dvd[i].getArtist().compare(" "+response)==0){
			cout<<dvd[i].toString();
			dvd[i].getSupport(support);
			for(int j=0;j<dvd[i].getnumberSupport();j++)
				cout<<support[j]<<endl;
			cout<<"Wide_Screen: "<<dvd[i].getwideScreen()<<endl;
			cout<<"TV_Format: "<<dvd[i].gettvFormat()<<endl;
			cout<<"Num_special_features: "<<dvd[i].getnumberFeatures()<<endl;
			dvd[i].getFeatures(features);
			for(int j=0;j<dvd[i].getnumberFeatures();j++)
				cout<<features[j]<<endl;
			cout<<"Num_sound_options: "<<dvd[i].getnumberofSound()<<endl;
			dvd[i].getSound(sound);
			for(int j=0;j<dvd[i].getnumberofSound();j++)
				cout<<sound[j]<<endl;
		}
		if(cassette[i].getArtist().compare(" "+response)==0){
			cout<<cassette[i].toString();
			cassette[i].getTracks(tracks);
			for(int j=0;j<cassette[i].getNumberofTracks();j++){
				cout<<tracks[j]<<endl;
		}
		}
		if(cd[i].getArtist().compare(" "+response)==0){
			cout<<cd[i].toString();
			cd[i].getTracks(tracks);
			for(int j=0;j<cd[i].getNumberofTracks();j++){
				cout<<tracks[j]<<endl;
			}	
		}
	}
	system("pause");
}
void Catalog::SaveData(){
	string tracks[100];
	string support[100];
	string features[100];
	string sound[100];
	ofstream myfile;
	   myfile.open("Programming Assignment 4 Data.txt");
	  

    for(int i=0; i<MAX_SIZE; i++){
        if(cassette[i].getArtist()!="DELETED"&&cassette[i].getTitle()!="UNKNOWN"){
			myfile<<cassette[i].toString();
			cassette[i].getTracks(tracks);
			for(int j=0;j<cassette[i].getNumberofTracks();j++){
				cout<<tracks[j]<<endl;
			}
		}
		if(cd[i].getArtist()!="DELETED"&&cd[i].getTitle()!="UNKNOWN"){
			myfile<<cd[i].toString();
			cd[i].getTracks(tracks);
			for(int j=0;j<cd[i].getNumberofTracks();j++){
				myfile<<tracks[j]<<endl;
			}	
		}
       if(dvd[i].getArtist()!="DELETED"&&dvd[i].getTitle()!="UNKNOWN"){
			myfile<<dvd[i].toString();
			dvd[i].getSupport(support);
			for(int j=0;j<dvd[i].getnumberSupport();j++)
				myfile<<support[j]<<endl;
			myfile<<"Wide_Screen: "<<dvd[i].getwideScreen()<<endl;
			myfile<<"TV_Format: "<<dvd[i].gettvFormat()<<endl;
			myfile<<"Num_special_features: "<<dvd[i].getnumberFeatures()<<endl;
			dvd[i].getFeatures(features);
			for(int j=0;j<dvd[i].getnumberFeatures();j++)
				myfile<<features[j]<<endl;
			myfile<<"Num_Sound_options: "<<dvd[i].getnumberofSound()<<endl;
			dvd[i].getSound(sound);
			for(int j=0;j<dvd[i].getnumberofSound();j++)
				myfile<<sound[j]<<endl;
		}
	   if(vhs[i].getArtist()!="DELETED"&&vhs[i].getTitle()!="UNKNOWN"){
			myfile<<vhs[i].toString();
			vhs[i].getSupport(support);
			for(int j=0;j<vhs[i].getnumberSupport();j++)
				myfile<<support[j]<<endl;
			myfile<<"Num_Trailers:"<<vhs[i].getnumberofTrailers()<<endl;
		}
    }
   myfile.close();
}


Catalog::~Catalog(void)
{
}
