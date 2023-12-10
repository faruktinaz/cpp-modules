#include "replacefile.hpp"

int checkErrors(int argc, std::string argv1, std::string argv2, std::string argv3)
{
	if (argc != 4)
	{
		std::cout << "Invalid Argument" << std::endl;
		return -1;
	}
	else if (argv1.empty() || argv2.empty() || argv3.empty())
	{
		std::cout << "Error : Empty arguments" << std::endl;
		return -1;
	}
	else if (!argv2.compare(argv3))
	{
		std::cout << "Error : argumtents may be diffrent" << std::endl;
		return -1;
	}
	return 0;
}

int initFiles(fileReplace *Files, char **argv)
{
	Files->fileName = argv[1];
	Files->fileNameWReplace = Files->fileName + ".replace";
	Files->s1 = argv[2];
	Files->s2 = argv[3];
	Files->inputFile.open(Files->fileName.c_str());
	if (!Files->inputFile.is_open())
	{
		std::cout << "error" << std::endl;
		return -1;
	}
	Files->outputFile.open(Files->fileNameWReplace.c_str());
	if (!Files->outputFile.is_open())
	{
		std::cout << "error" << std::endl;
		return -1;
	}
	return 0;
}