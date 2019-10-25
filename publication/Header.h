#pragma once
#include <string>
using namespace std;

class Publication
{
protected:
	string title;
	string author;
	double cost;
	string isbn;
public:
	Publication();
	Publication(string t, string a, double c, string i);
	void getPublicationInput();
	void showPublication();


};

class Book : public Publication
{
private:
	int pages;
public:
	Book();
	Book(int p, string t, string a, double c, string i);
	void getBookInput();
	void showBook();
};

class Audio : public Publication
{
private:
	int minutes;
public:
	Audio();
	Audio(int m, string t, string a, double c, string i);
	void getAudioInput();
	void showAudio();
};