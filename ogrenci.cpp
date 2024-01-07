#include "ogrenci.h"
#include <iostream>
using namespace std;
ogrenci::ogrenci(int _id,string _ad,int _sinavNot){
	id=_id;
	ad=_ad;
	sinavNot=_sinavNot;
}
void ogrenci::setId(int _id){
	id=_id;
}
void ogrenci::setAd(string _ad){
	ad=_ad;
}
void ogrenci::setSinavNot(int _sinavNot){
    sinavNot=_sinavNot;
}
int ogrenci::getId(){
	return id;
}
string ogrenci::getAd(){
	return ad;
}
int ogrenci::getSinavNot(){
	return sinavNot;
}
void ogrenci::bilgileriYaz(){
	cout<<" id: "<<id<<" ad: "<<ad<<" sinav notu: "<<sinavNot<<endl;
}
