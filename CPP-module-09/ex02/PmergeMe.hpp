#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <cstdlib>

class PmergeMe
{
private:
	std::list<int> m_list;
	std::vector<int> m_vec;

public:
	PmergeMe();
	PmergeMe(const PmergeMe &cpy);
	std::vector<int> mergeVec(std::vector<int> &left, std::vector<int> &right);
	std::vector<int> johnsonVec(std::vector<int> &arr);
	std::list<int> mergeList(std::list<int> &left, std::list<int> &right);
	std::list<int> johnsonList(std::list<int> &lst);
	void runAlgorithm(int argc, char **argv);
	void checker(int argc, char **argv);
	~PmergeMe();
};

#endif
