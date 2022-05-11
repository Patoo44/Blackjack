#include <iostream>
using namespace std;

void karta(string karta) {
	cout << " ___ " << endl;
	cout << "|   |" << endl;
	cout << "| "<< karta <<" |"<< endl;
	cout << "|___|" << endl;
}



int main() {

	 int a;
	 int b;


	cout << "BLACKJACK" << endl;
	
	cout << "Vase karty" << endl;
	
		
		a = rand() % 13 + 1;
		switch (a)
		{
		case 2:
			karta("2");
			break;
		case 3:
			karta("3");
			break;
		case 4:
			karta("4");
			break;
		case 5:
			karta("5");
			break;
		case 6:
			karta("6");
			break;
		case 7:
			karta("7");
			break;
		case 8:
			karta("8");
			break;
		case 9:
			karta("9");
			break;
		case 10:
			karta("10");
			break;
		case 11:
			karta("J");
			break;
		case 12:
			karta("Q");
			break;
		case 13:
			karta("K");
			break;
		case 14:
			karta("A");
			break;
		}
		b = rand() % 13 + 1;
		switch (b)
		{
		case 2:
			karta("2");
			break;
		case 3:
			karta("3");
			break;
		case 4:
			karta("4");
			break;
		case 5:
			karta("5");
			break;
		case 6:
			karta("6");
			break;
		case 7:
			karta("7");
			break;
		case 8:
			karta("8");
			break;
		case 9:
			karta("9");
			break;
		case 10:
			karta("10");
			break;
		case 11:
			karta("J");
			break;
		case 12:
			karta("Q");
			break;
		case 13:
			karta("K");
			break;
		case 14:
			karta("A");
			break;
		}
		

		cout << "Chcete dalsiu kartu?" << endl;
		cout << "1--Ano        2--NIE" << endl;
		int choose;
		cin >> choose;
		











	
		














}