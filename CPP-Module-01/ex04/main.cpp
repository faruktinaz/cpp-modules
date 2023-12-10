#include "replacefile.hpp"


int main(int argc, char **argv)
{
	fileReplace Files;
	if (checkErrors(argc, argv[1], argv[2], argv[3]) == -1)
		return (-1);
	if (initFiles(&Files, argv) == -1)
		return (-1);
	while (std::getline(Files.inputFile, Files.tmp))
	{
		Files.find = Files.tmp.find(Files.s1);
		while (Files.find != std::string::npos)
		{
			Files.tmp.erase(Files.find, Files.s1.length());
			Files.tmp.insert(Files.find, Files.s2);
			Files.find = Files.tmp.find(Files.s1);
		}
		Files.outputFile << Files.tmp << std::endl;
	}
	Files.inputFile.close();
	Files.outputFile.close();
	return 0 ;
}