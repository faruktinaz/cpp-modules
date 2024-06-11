#include"PmergeMe.hpp"

std::vector<int> PmergeMe::mergeVec(std::vector<int> &left, std::vector<int> &right)
{
    std::vector<int> result;
    size_t i = 0, j = 0;
    
    while (i < left.size() && j < right.size())
	{
        if (left[i] <= right[j])
            result.push_back(left[i++]);
        else
            result.push_back(right[j++]);
    }

    while (i < left.size())
        result.push_back(left[i++]);
    while (j < right.size())
        result.push_back(right[j++]);
    
    return result;
}

std::vector<int> PmergeMe::johnsonVec(std::vector<int> &arr)
{
	if (arr.size() <= 1) return arr;
    
    size_t mid = arr.size() / 2;
    std::vector<int> left(arr.begin(), arr.begin() + mid);
    std::vector<int> right(arr.begin() + mid, arr.end());
    
    left = johnsonVec(left);
    right = johnsonVec(right);
    
    return mergeVec(left, right);
}

std::list<int> PmergeMe::mergeList(std::list<int> &left, std::list<int> &right)
{
    std::list<int> result;
    std::list<int>::const_iterator it1 = left.begin();
    std::list<int>::const_iterator it2 = right.begin();

    while (it1 != left.end() && it2 != right.end())
	{
        if (*it1 <= *it2)
			result.push_back(*it1++);
		else
			result.push_back(*it2++);
    }

    while (it1 != left.end())
		result.push_back(*it1++);
    while (it2 != right.end())
		result.push_back(*it2++);

    return result;
}

std::list<int> PmergeMe::johnsonList(std::list<int> &lst) {
    if (lst.size() <= 1) return lst;
    
    std::list<int>::iterator mid = lst.begin();
    std::advance(mid, lst.size() / 2);
    std::list<int> left(lst.begin(), mid);
    std::list<int> right(mid, lst.end());
    
    left = johnsonList(left);
    right = johnsonList(right);
    
    return mergeList(left, right);
}

void printerContainer(std::vector<int> vec, std::string t_time)
{
	std::cout << t_time;
	for (size_t i = 0; i < vec.size(); ++i)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
}

void printerContainer(std::list<int> lst, std::string t_time)
{
    std::cout << t_time;
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
		std::cout << *it << " ";
    std::cout << std::endl;
}

void PmergeMe::runAlgorithm(int argc, char **argv)
{
	std::vector<int> result_vec;
	clock_t startTime, endTime;
	std::list<int> result_list;
	checker(argc, argv);

	std::cout << std::endl;
	printerContainer(m_vec, "Before: ");
	result_vec = johnsonVec(m_vec);
	printerContainer(result_vec, "After: ");

	startTime = clock();
	result_vec = johnsonVec(m_vec);
	endTime = clock();
	double vectorTime = 1000.0 * (endTime - startTime) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << result_vec.size() << " elements with std::vector: " << vectorTime << " ms" << std::endl;

	startTime = clock();
	result_list = johnsonList(m_list);
	endTime = clock();
	double listTime = 1000.0 * (endTime - startTime) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << result_list.size() << " elements with std::list: " << listTime << " ms" << std::endl;

}

int is_numeric(std::string arg)
{
	for (size_t i = 0; arg[i]; i++)
		if (!isdigit(arg[i]))
			return 0;
	return 1;
}

void printError()
{
	std::cout << "Error" << std::endl;
	exit(1);
}

void PmergeMe::checker(int argc, char **argv)
{
    for (int i = 1; i < argc; i++)
	{
		if (is_numeric(argv[i]))
		{
			int value = std::stoi(argv[i]);
			if (value < 1)
				printError();
			m_vec.push_back(value);
			m_list.push_back(value);
		}
		else
			printError();
    }
}

PmergeMe::PmergeMe(){}
PmergeMe::~PmergeMe(){}