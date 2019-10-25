#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

int main()
{
	/**Book mybook1;
	Book mybook2(300, "The Stand", "King", 20, "23413413");

	Audio myaudio1;
	Audio myaudio2( 45, "Carrie", "King", 30, "123123123");

	mybook1.getBookInput();
	myaudio1.getAudioInput();
	mybook1.showBook();
	myaudio1.showAudio();
	mybook2.showBook();
	myaudio2.showAudio();  
	**/

	int nBooks = 0, nAudio = 0;
	cout << "how many books?" << endl;
	cin >> nBooks;
	cout << "how many audio?" << endl;
	cin >> nAudio;
	cin.ignore();

	Book *pBooks = NULL;
	Audio *pAudio = NULL;
	pBooks = new Book[nBooks];
	pAudio = new Audio[nAudio];

	for (int i = 0; i < nBooks; i++)
	{
		pBooks[i].getBookInput();
	}

	for (int i = 0; i < nAudio; i++)
	{
		pAudio[i].getAudioInput();
	}
	// do something w/ my data

	// now clean up my memory
	delete [] pBooks;
	delete [] pAudio;

	system("pause");
	return 0;
}
