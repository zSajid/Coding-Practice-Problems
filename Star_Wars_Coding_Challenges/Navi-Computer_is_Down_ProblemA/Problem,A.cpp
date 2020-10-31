#include<iostream>
#include<string>
#include<cmath>
#include<fstream>
using namespace std;

int main()
	{
		// Variables
		ifstream fin("input.txt");
		int size = 0;
		string a, b;
		float disA1, disA2, disA3;
		float disB1, disB2, disB3;

		fin >> size;

		// Loop through from 0 till the amount of distances that need to be calculated
		for(int i = 0; i < size; i++)
			{
				// Get the first name
				fin >> a;

				// Check to see if there is a space in its name, since the space is important, need to concatenate all three things
				if(fin.peek() == ' ')
					{
						string a2;
						fin >> a2;
						a += " " + a2;
					}

				// Get the rest of the values
				fin >>  disA1 >> disA2 >> disA3;

				// Rinse and repeat from the first part
				fin >> b;

				if(fin.peek() == ' ')
					{
						string b2;
						fin >> b2;
						b += " " +  b2;
					}
 				fin >> disB1 >> disB2 >> disB3;

 				// Calculate the distance between the three locations based on the equation in the pdf
				float disC1 = (disB1 - disA1), disC2 = (disB2 - disA2), disC3 = (disB3 - disA3);
				disC1 *= disC1, disC2 *= disC2, disC3 *= disC3;

				float  m = sqrt(disC1 + disC2 + disC3);

				// print it out
				cout << a << " to " << b << ": " << m << endl;
			}

		return 0;
	}
