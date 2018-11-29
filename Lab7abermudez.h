

#include "RandomUtilities.h"
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
// From Dr. Tom Bailey's Lab6 SortedDriver.cpp
// *modified*
// post: a vector of listSize random doubles from
//         the range minNum to maxNum has been returned.
//Alejandro Bermudez
//lab7


using std::vector;
using std::cout;
using std::endl;

vector<double> getNums(size_t listSize, double minNum, double maxNum)
{
	vector<double> theList;
	for (size_t i = 0; i < listSize; ++i)
	{
		theList.push_back(randReal(minNum, maxNum));
	}
	return theList;
}

//TODO: implement quicksort here

vector<double> QuickSort(vector<double>& vec1) {
	if (vec1.size() > 1) {
		int pivot = floor(vec1.size() / 2);
		vector<double> left;
		vector<double> right;
		right.push_back(vec1[pivot]);
		for (int i = 0; i<vec1.size(); i++) {
			if (i != pivot) {
				if (vec1[i]<vec1[pivot]) {
					left.push_back(vec1[i]);
				}
				else {
					right.push_back(vec1[i]);
				}
			}
		}
		QuickSort(left);
		QuickSort(right);
		//merge left and right into a single vector
		vector<double> vsorted
			vsorted.reserve(left.size() + right.size());
		vsorted.insert(vsorted.end(), left.begin(), left.end());
		vsorted.insert(vsorted.end(), right.begin(), right.end());
		//
		vec1.swap(vsorted);
	}
	return vec1;
}
int compare(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}
//TODO: implement quicksort here
//return a sorted vector of doubles
vector<double> BubbleSort(vector<double>& vec1) {
	bool pass = false;
	double temp;
	int size = vec1.size();
	while (!pass) {
		pass = true;
		for (int i = 0; i< size - 1; i++) {
			if (vec1[i] > vec1[i + 1]) {
				pass = false;
				temp = vec1[i];
				vec1[i] = vec1[i + 1];
				vec1[i + 1] = temp;
			}
		}
	}
	return vec1;

}
//TODO: implement quicksort here
//the finction returns a sorted vector of doubles
vector<double> InsertionSort(vector<double>& vec1) {
	int size = vec1.size();
	double i, j, tmp;
	for (i = 1; i < size; i++) {
		j = i;
		while (j > 0 && vec1[j - 1] > vec1[j]) {
			tmp = vec1[j];
			vec1[j] = vec1[j - 1];
			vec1[j - 1] = tmp;
			j--;
		}
	}
	return vec1;

}
//TODO: implement SelectionSort here
//the function returns a sorted vector of doubles
vector<double> SelectionSort(vector<double>& vec1, int sizeOfVec1)
{

	int min = 0;
	for (int i = 0; i < sizeOfVec1 - 1; i++)
	{
		min = i;
		for (int j = i + 1; j<sizeOfVec1; j++)
		{
			if (vec1[j] < vec1[min])
			{
				min = j;
			}
		}
		swap(vec1[min], vec1[i]);

	}
	return vec1;
}
#pragma once
