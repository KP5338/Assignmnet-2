#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<string>
#include<math.h>
using namespace std;

int main(int argc, char* argv[])
{
	ifstream fin;
	fin.open(argv[1]);
	string line;
	while (!fin.eof())
	{
		getline(fin, line);
		cout << line << "\n";
		for (int i = 0; i < 26; i++)
		{
			if (line[i] == '0')
			{
				line[i] = ' ';
			}
			else if (line[i] == '1')
			{
				line[i] = '*';
			}

		}
		cout << line << "\n";
	}
	fin.close();
}

