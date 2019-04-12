#include"Complex.h"

//int calculate::vvod_re1(int a)
//{
	
//	return 0;
//}

//int calculate::vvod_re2(int a)
//{
//	return 0;
//}

//int calculate::vvod_im1(int a)
//{
//	return 0;
//}

//int calculate::vvod_im2(int a)
//{
//	return 0;
//}

void calculate::sum()
{
	
	double mnim = im1 + im2;
	if (mnim >= 0)
		cout << (re1+re2) << "+" << mnim << "i" << endl;
	else
		cout << (re1+re2) << mnim << "i" << endl;
	

	
	

}

void calculate::raz()
{
	
	double mnim = im1 - im2;
	if(mnim>=0)
		cout << (re1 - re2) << "+" << mnim << "i" << endl;
	else
		cout << (re1 - re2)<< mnim << "i" << endl;
}

void calculate::umn()
{
	
	double mnim = ((re1*im2)+(re2*im1));
	if (mnim >= 0)
		cout << ((re1*re2)-(im1*im2)) << "+" << mnim << "i" << endl;
	else
		cout << ((re1*re2) - (im1*im2)) << mnim << "i" << endl;
}

void calculate::del()
{
	
	double mnim = (re2*im1 - re1 * im2) / (im1*im1 + im2 * im2);
	if (mnim >= 0)
		cout << ((re1*im1)+(re2*im2))/((im1*im1)+(im2*im2)) << "+" << mnim << "i" << endl;
	else
		cout << ((re1*im1) + (re2*im2)) / ((im1*im1) + (im2*im2)) << mnim << "i" << endl;
}



int calculate::char_to_int(char c) {
	switch (c)
	{
	case '0': return 0;
	case '1': return 1;
	case '2': return 2;
	case '3': return 3;
	case '4': return 4;
	case '5': return 5;
	case '6': return 6;
	case '7': return 7;
	case '8': return 8;
	case '9': return 9;
	
	default:
		return -1;
	}
}

int calculate::get_int(char n[], int size) {
	int x = 0;
	int k = size - 1;
	int l = size - 2;
	if (n[0] != 45) {
		for (int i = 0; i < size; ++i) {

			x += char_to_int(n[i]) * pow(10, k);
			k--;
		}
		return x;
	}
	else
		for (int i = 1; i < size; ++i) {

			x += char_to_int(n[i]) * pow(10, l);
			l--;
		}
	return x*(-1);
}

int calculate::get_number_size(const char ch[]) {
	int i = 0;
	while (ch[i] != '\0')
	{
		i++;
	}
	return i;
}
