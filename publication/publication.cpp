#include "Header.h"
#include <string>
#include <iostream>
using namespace std;

// inplement Publication class
Publication::Publication()
{
	title = "";
	author = "";
	cost = 0;
	isbn = "";
}
Publication::Publication(string t, string a, double c, string i)
{
	title = t;
	author = a;
	cost = c;
	isbn = i;
}
void Publication::getPublicationInput()
{
	cout << " Publication name?" << endl;
	getline(cin, title);
	cout << "author?" << endl;
	getline(cin, author);
	cout << "cost?" << endl;
	cin >> cost;
	cin.ignore();
	cout << "isbn?" << endl;
	getline(cin, isbn);

}
void Publication::showPublication()
{
	cout << "title " << title;
	cout << " author " << author;
	cout << " cost " << cost;
	cout << " isbn " << isbn << endl;
}

// implement Book
Book::Book() : Publication()
{
	pages = 0;
}
Book::Book(int p, string t, string a, double c, string i) : Publication(t, a, c, i)
{
	pages = 0;
}
void Book::showBook()
{
	showPublication();
	cout << "pages " << pages << endl;
}
void Book::getBookInput()
{
	getPublicationInput();
	cout << " how many pages? " << endl;
	cin >> pages;
	cin.ignore();
}

// implement Audio
Audio::Audio() : Publication()
{
	minutes = 0;
}
Audio::Audio(int m, string t, string a, double c, string i) : Publication(t, a, c, i)
{
	minutes = m;
}
void Audio::getAudioInput()
{
	getPublicationInput();
	cout << " Minutes?" << endl;
	cin >> minutes;
	cin.ignore();
}
void Audio::showAudio()
{
	showPublication();
	cout << "Minutes " << minutes << endl;
}