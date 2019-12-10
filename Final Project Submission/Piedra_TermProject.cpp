/* 
Program Name: Ear Training Program
Purpose: Ear Training program to help students memorize and practice freqeuncies and help them in hearing them by letting them play the notes
Author: Juan S. Piedra
Date Last Modified: 12/09/2019
*/

#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

	int A = 880,Ao = 440,As = 932; // assign ints to every note of the chromatic scale based on a frquency chart for every note 
	int B = 988;
	int C = 1030,Cs = 1045;
	int D = 294, Ds = 311;
	int E = 330;
	int F = 698, Fs = 740;
	int G = 784, Gs = 830;

	int frth = 400; // assign ints to duration of the notes in miliseconds = quarter notes
	int one = 800; // equal eigth notes
	int half = 1600; // equal sixteenth notes 
	int whole = 3200; // equal thirtysecond notes 
	void Pause() // pause system afater variable declaration 
	{
		char Ref; // variable for intializing the program 
		cin >> Ref; // ask user input 
	} 
	int play(int note, int length) // declare a function based on two variables: frequency and duration
{
	Beep(note,length); // beep function coming from play function with frqeuncy and legth values
	return 0; // return
}



	
void MajorThird() // add interval function for all intervals displayed 
{
	play(A,frth);
	play(Cs,frth);
}
void MinorThird ()
{
    play (G,frth);
    play (Fs,frth);
}
void PerfectFourth ()
{
    play (C,frth);
    play (F,frth);
}
void PerfectFifth ()
{
    play (B,frth);
    play (Fs,frth);
}
void MajorSixth ()
{
    play (E,frth);
    play (Cs,frth);
}
void MinorSixth ()
{
    play (E,frth);
    play (C,frth);
}
void MajorSeventh ()
{
    play (A,frth);
    play (Gs,frth);
}
void MinorSeventh ()
{
    play (A,frth);
    play (G,frth);
}
void Octave ()
{
    play (A,frth);
    play (Ao,frth); // play octave 
}
void playC(int n1,int n2,int n3,int n4,int n5,int n6,int n7,int n8,int n9,int n10,int n11,int n12,int n13,int n14,int n15)
{
	play(n1,frth); // Play function initialized on variable note numbers n1,n1,n3, etc.. representing all possible note values given
	play(n2,frth);
	play(n3,frth);
	play(n4,frth);
	play(n5,frth);
	play(n6,frth);
	play(n7,frth);
	play(n8,frth);
	play(n9,frth);
	play(n10,frth);
	play(n11,frth);
	play(n12,frth);
	play(n13,frth);
	play(n14,frth);
	play(n15,frth);

    return 0;
}

int main()
{
	
	
	string note; // input for notes
	int choice; // choice for main action
	int N[15]; //Array to store user custom notes
	int Nn = 1 ;
	cout << "Welcome to Juan's Begginer Ear Training Program" << endl;
    cout << "This program is made to help you memorize musical intervals" << endl;
	cout << "(1)Play a major third interval" << endl;
    cout << "(2)Play a minor third interval" << endl;
    cout << "(3) Perect Fourth" << endl;
    cout << "(4) Perfect Fifth" << endl;
    cout << "(5) Major Sixth" << endl;
    cout << "(6) Minor Sixth" << endl;
    cout << "(7) Major Seventh" << endl;
    cout << "(8) Minor Seventh" << endl;
    cout << "(9) Ocatve" << endl;
	cout << "(10) Play some Piano!(up to 15 notes)" << endl;
	cin >> choice;
	while(choice != -1) // create while loop to prompt user for choice, if 
	{
	if(choice == 1)
	{
		MajorThird();
	}
    if (choice == 2)
    {
        MinorThird ();
    }
    if (choice == 3)
    {
        PerfectFourth ();
    }
    if (choice == 4)
    {
        PerfectFifth ();
    }
    if (choice == 5)
    {
        MajorSixth ();
    }
    if (choice == 6)
    {
        MinorSixth ();
    }
    if (choice == 7)
    {
        MajorSeventh ();
    }
    if (choice == 8)
    {
        MinorSeventh ();
    }
    if (choice == 9)
    {
        Octave ();
    }
	if (choice == 10)
	{
	for (int x = 0; x < 15; x++) // create for loop to assign notes to frquencies as they are played, make x int less than 15 notes 
	{
		if(note == "A")
		{
			N[x] = 880; // initialize array for user costume note input based on frequency 
		}
		if(note == "As")
		{
			N[x] = 932;
		}
		if(note == "B")
		{
			N[x] = 988;
		}
		if(note == "C")
		{
			N[x] = 1030;
		}
		if(note == "Cs")
		{
			N[x] = 1045;
		}
		if(note == "D")
		{
			N[x] = 294;
		}
		if(note == "Ds")
		{
			N[x] = 311;
		}
		if(note == "E")
		{
			N[x] = 330;
		}
		if(note == "F")
		{
			N[x] = 698;
		}
		if(note == "Fs")
		{
			N[x] = 740;
		}
		if(note == "G")
		{
			N[x] = 784;
		}
		if(note == "Gs")
		{
			N[x] = 830;
		}
		cout << "enter a note: " << endl;
		cin >> note; cin.ignore(1,1);


	}
	playC(N[0],N[1],N[2],N[3],N[4],N[5],N[6],N[7],N[8],N[9],N[10],N[11],N[12],N[13],N[14]); // array linked to the play funcntion storing user inputs
	}
	}
	
	Pause();
		
	return 0;
}