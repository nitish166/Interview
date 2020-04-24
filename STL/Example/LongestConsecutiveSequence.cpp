#include <bits/stdc++.h>
using namespace std;

vector<int> longestConsecutiveIncreasingSequence(int* arr, int n)
{
	unordered_map <int, bool> visitedElement;
	unordered_map <int, int> elementToIndexMapping;

	for(int i=0; i<n; i++)
	{
		elementToIndexMapping[arr[i]] =i;
		if(visitedElement.count(arr[i])==0)
		{
			visitedElement[arr[i]] = true;
		}
	}

	vector<int> longestSequence;

	int globalMaxSequenceLength =1;
	int globalMinStartIndex =0;

	for(int i=0; i<n; i++)
	{
		int num = arr[i];

		int currentMinStartIndex = i;
		int count =0;
		int tempNum = num;

		// Forward
		while(visitedElement.count(tempNum)==1 && visitedElement[tempNum] == true)
		{
			visitedElement[tempNum] = false;
			count++;
			tempNum++
		}

		// Backward

		tempNum = num-1;
		while(visitedElement.count(tempNum)==1 && visitedElement[tempNum] == true)
		{
			visitedElement[tempNum] = false;
			count++;

			currentMinStartIndex = elementToIndexMapping[tempNum];
			tempNum--;
		}

		if(count > globalMaxSequenceLength){
			globalMaxSequenceLength = count;
			globalMinStartIndex = currentMinStartIndex;
		}
		else if(count == globalMaxSequenceLength)
		{
			if(currentMinStartIndex < globalMinStartIndex)
			{
				globalMinStartIndex = currentMinStartIndex;
			}
		}
	}

	int globalStartNum = arr[globalMinStartIndex];

	while(globalMaxSequenceLength !=0)
	{
		globalStartNum++;
		longestSequence.push_back(globalStartNum);
		globalMaxSequenceLength--;
	}

	return longestSequence;
}
