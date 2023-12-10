#ifndef REPLACEFILE_HPP
# define REPLACEFILE_HPP

#include <iostream>
#include <fstream>
#include <string>

class fileReplace
{
public:
	std::string fileName;
	std::string fileNameWReplace;
	std::string s1;
	std::string s2;
	std::string tmp;
	std::size_t find;
	std::ifstream inputFile;
	std::ofstream outputFile;
};

int initFiles(fileReplace *Files, char **argv);
int checkErrors(int argc, std::string argv1, std::string argv2, std::string argv3);

#endif