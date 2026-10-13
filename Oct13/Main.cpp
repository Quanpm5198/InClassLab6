#include"StudentRelatedFunctions.h"
#include<fstream>

vector<string> getAllStudentNames(string filename)
{
	ifstream fin(filename);

	if (fin.is_open() == false) 
	{

		
		cout << filename << " was not found :(" << endl;
		return {}; //what is this? (an empty array)
	}

	vector<string> allNames;  
	string currentName;
	while (getline(fin, currentName))
	{
		allNames.push_back(currentName);
	}

	fin.close(); 

	return allNames;
}

string getLongestName(vector<string> names)
{

	string currentLargestName = "";

	for (int i = 0; i < names.size(); ++i)
	{
		if (names[i].length() > currentLargestName.length())
		//if (currentLargestName.length() < names[i].length())
		{
			currentLargestName = names[i];
		}
	}

	return currentLargestName;
	//return string();//"" (empty string)
}


