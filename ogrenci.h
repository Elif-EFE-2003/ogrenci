#pragma once
#ifndef OGRENCI_H
#define OGRENCI_H
#include <iostream>
using namespace std;
class ogrenci
{
	private:
		int id;
		string ad;
		int sinavNot;
	public:
		ogrenci(int _id,string _ad,int _sinavNot);
		void setId(int _id);
		void setAd(string _ad);
		void setSinavNot(int _sinavNot);
		int getId();
		string getAd();
		int getSinavNot();
		void bilgileriYaz();
		
		
		
	
};

#endif
