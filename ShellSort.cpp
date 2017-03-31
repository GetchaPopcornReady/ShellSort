#include <iostream>
#include "ShellSort.h"
#include <cmath>
using namespace std;



void shellSort(std::vector<long>& vect)
{
	

	int j;
	int k = 0;
	int gap = 1;

	//traverse while gap is less than vector size
	while(gap <= vect.size() + 1)
	{
			// cout << "1" << endl; used for testing
		//traverse throug entire vector
		for(int i = gap; i < vect.size(); i++)
		{
			// cout << "2" << endl; used for testing
			int temp = vect.at(i);
			j = i;

			while(j >= gap && vect.at(j - gap) > temp)
			{
				vect.at(j) = vect.at(j - gap);
				j = j - gap;	//take away the gap
				// cout << "3" << endl;	used for testing
			}

			vect.at(j) = temp;	//set vector at position traversing to temp variable

		}
			k = k + 1; //increment k by 1

			//set gap to hibbards sequence
			gap = pow(2,k) - 1;

	}

}














