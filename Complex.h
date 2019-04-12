#pragma once
#include<iostream>
#include<math.h>
#include<string>


using namespace std;

struct calculate {
	double re1,re2, im1,im2;
	void sum();
	void raz();
	void umn();
	void del();
	
	int get_int(char n[], int size);
	int char_to_int(char c);
	int get_number_size(const char ch[]);

		




};
