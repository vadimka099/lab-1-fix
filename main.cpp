#include<iostream>
#include"Complex.h"
using namespace std;





int main(){
	setlocale(LC_ALL, "RUSSIAN");
	calculate m;
	int size = 0;
	
	char n[1000];

	cout << "Ввод первого числа"<<endl;
	tryAgain1:
	cout << "Введите целую часть" << endl;

	cin.getline(n, 1000);
	size = m.get_number_size(n);
	for (int i = 0; i < size;i++) {
		if ((n[i] < 45) || ((n[i] > 45) && (n[i] < 48)) || (n[i] > 57)||(n[1]==45)||((n[0]==45)&&(size==1))||(n[size-1]==45)){
			cout << "Неккоректное"<<endl;
			goto tryAgain1;
		}
	}
		

	m.re1=m.get_int(n, size);
	
	
		
		
	tryAgain2:
	cout << "Введите мнимую часть" << endl;
	cin.getline(n, 1000);
	size = m.get_number_size(n);
	for (int i = 0; i < size;i++) {
		if ((n[i] < 45) || ((n[i] > 45) && (n[i] < 48)) || (n[i] > 57) || (n[1] == 45) || ((n[0] == 45) && (size == 1)) || (n[size - 1] == 45)) {
			cout << "Неккоректное" << endl;
			goto tryAgain2;
		}
	}

	m.im1 = m.get_int(n, size);
	

	
	


	cout << "Ввод второго числа" << endl;
	tryAgain3:
	cout << "Введите целую часть" << endl;
	cin.getline(n, 1000);
	size = m.get_number_size(n);
	for (int i = 0; i < size;i++) {
		if ((n[i] < 45) || ((n[i] > 45) && (n[i] < 48)) || (n[i] > 57) || (n[1] == 45) || ((n[0] == 45) && (size == 1)) || (n[size - 1] == 45)) {
			cout << "Неккоректное" << endl;
			goto tryAgain3;
		}
	}
	m.re2 = m.get_int(n, size);
	tryAgain4:
	cout << "Введите мнимую часть" << endl;
	cin.getline(n, 1000);
	size = m.get_number_size(n);
	for (int i = 0; i < size;i++) {
		if ((n[i] < 45) || ((n[i] > 45) && (n[i] < 48)) || (n[i] > 57) || (n[1] == 45) || ((n[0] == 45) && (size == 1)) || (n[size - 1] == 45)) {
			cout << "Неккоректное" << endl;
			goto tryAgain4;
		}
	}
	m.im2 = m.get_int(n, size);
	cout << "Сумма" << endl;
	
	m.sum();

	cout << "Разность" << endl;
	m.raz();

	cout << "Произведение" << endl;
	m.umn();

	cout << "Деление" << endl;
	m.del();
	
	system("pause");



	return 0;
}
