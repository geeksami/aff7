#include <iostream>
#include <"affi7.h">
#include <"numbers.h">

using namespace std;

int aff::numbers(int inumber)[3]{
	int mille,cent,dix,un;
	if (inumber<10000){
		mille=inumber - inumber%1000;
		inumber=inumber-mille;
		cent=inumber - inumber%100;
		inumber=inumber-cent;
		dix=inumber - inumber%10;
		inumber=inumber-dix;
		un=inumber;
		return [mille,cent,dix,un];
	}
	else{
		return 01;
	};

};