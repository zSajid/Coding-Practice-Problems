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

		for(int i = 0; i < size; i++)
			{


				fin >> a;
				if(fin.peek() == ' ')
				{
					fin >> a;
				}
				fin >>  disA1 >> disA2 >> disA3;

				fin >> b;

				if(fin.peek() == ' ')
				{
					fin >> b;
				}

 				fin >> disB1 >> disB2 >> disB3;

				float disC1 = (disB1 - disA1), disC2 = (disB2 - disA2), disC3 = (disB3 - disA3);
				disC1 *= disC1, disC2 *= disC2, disC3 *= disC3;

				float  m = sqrt(disC1 + disC2 + disC3);

				cout << a << " to " << b << ": " << m << endl;
			}

		return 0;
	}