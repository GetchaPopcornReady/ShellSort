#include "SortingIO.h"
using namespace std;

//put all of the values from text file into array
void valuesIntoArray(std::vector<long>& vect, std::string file)
{
	//open file
	ifstream inputFile;
	inputFile.open(file.c_str());

	
	int counter = 0;
	int number;

	//push all values into vector
	if(inputFile.good())
	{
		while(inputFile >> number)
		{
			vect.push_back(number);
		}
	}
	else
	{
		cout << "error opening file" << endl;
	}


}

//output numbers to new textfile
void outputToTextFile(std::vector<long> vect, std::string file)
{
	//open file
	ofstream outputFile;
	outputFile.open(file.c_str());

	//push all values into the file line by line
	if(outputFile.good())
	{
		for(int i = 0; i < vect.size(); i++)
		{
			outputFile << vect.at(i) << endl;
		}
	}
	else
	{
		cout << "error opening file" << endl;
	}

}

