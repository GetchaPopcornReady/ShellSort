#include "SortingIO.h"
#include "ShellSort.h"


using namespace std;

void printArray(std::vector<long>& vect);

int main(int argc, char *argv[])
{

	std::string inputFileName;
	std::string outputFileName;

	// cout << "Please provide the name of the file you would like to sort: ";
	// cin >> inputFileName;

	// cout << "Enter the file you would like to output your results to: ";
	// cin >> outputFileName;
	// cout << endl;

	//command line addition
	if(argc != 3)
	{
		cout << "Please include the input file name followed by the output file name...";
		exit(0);
	}

	inputFileName = argv[1];
	outputFileName = argv[2];



	cout << "Sorting..." << endl;

	//std::string fileName = "numbers.txt";

	std::vector<long> myVector;

	valuesIntoArray(myVector, inputFileName);
	shellSort(myVector);
	outputToTextFile(myVector, outputFileName);

	cout << "Sorting Complete!\n" << endl;

	// cout << "Before Shellsort: " << endl;
	// printArray(myVector);

	// shellSort(myVector);

	// cout << "After Shellsort: " << endl;
	// printArray(myVector);

	return 0;
}




void printArray(vector<long>& vect)
{
	for(int i = 0; i < vect.size(); i++)
	{
		cout << vect.at(i) << " ";
	}

	cout << endl;
}