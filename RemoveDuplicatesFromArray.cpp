#include<iostream>
using namespace std;

int main()
	{
	int arr[] = {1,1,2,3,4,20,40,34, 21,35,35};
	int size = 11, newSize = 0;

	for(int i = 0; i < size -1 ; i++)
		{
		cout << arr[i] << " " ;
		}
	cout << endl;
	
	// Loop through the array, comparing arr[i] to every other value, and if those values are similar, then loop
	// from that specific value and move the value adjacent to it
	for(int i = 0; i < size -1; i++, newSize++)
		{
			for(int j = i+1; j < size -1; j++)
			{
				if(arr[i] == arr[j])
				{
					cout << "Moving " << arr[j] << " and " << arr[j+1] << endl;

					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}

	cout << endl;

	// Issues where if the number of integers is less than 7, it does not print out the new array values accurately.
	if(size >7)
		{
			newSize -= 1;
		}

	for(int i = 0; i < newSize ; i++)
		{
		cout << arr[i] << " " ;
		}

	cout << endl;
	return 0;
	}