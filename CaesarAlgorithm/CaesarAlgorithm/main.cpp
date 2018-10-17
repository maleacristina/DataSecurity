#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

string textClar;
string textCriptat;
int cheie;
string textDecriptat;

void Citire() {
	cout << "Introduceti textul pe care doriti sa il criptati:";
	getline(cin, textClar);

	cout << "Introduceti cheia: ";
	cin >> cheie;

}

void Criptare() {
	textCriptat = textClar;
	for (int i = 0; i<textClar.length(); i++) {
		if (isupper(textClar[i])) {
			textCriptat[i] = (textClar[i] + cheie - 'A') % 26 + 'A';
		}
		if (islower(textClar[i])) {
			textCriptat[i] = (textClar[i] + cheie - 'a') % 26 + 'a';
		}
	}
	cout << "Textul criptat este: " << textCriptat << endl;
}

void Decriptare() {
	textDecriptat = textCriptat;
	for (int i = 0; i < textCriptat.length(); i++) {
		if (islower(textCriptat[i])) {
			textDecriptat[i] = ((textCriptat[i] - cheie - 'a')+26) % 26 + 'a';
		}
		if (isupper(textCriptat[i])) {
			textDecriptat[i] = ((textCriptat[i] - cheie - 'A')+26) % 26 + 'A';
		}
	}
	cout << "Textul decriptat este: " << textDecriptat << endl;
}

int main() {
	Citire();
	Criptare();
	Decriptare();
	return 0;
}