#ifndef SORTSEARCHALGS_H
#define SORTSEARCHALGS_H

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

// helpegit@github.com:GonzagaCPSC122/pa2-nickbar2003.gitr
void printVector(std::vector<int> &);

// sorting
void testSortingAlgorithms();
void selectionSortVectorGaddis(int[], int);
void bubbleSortVectorGaddis(int[], int);
void insertionSortVector(int[], int);

// searching
void testSearchingAlgorithms();
int linearSearchArray(const int[], int, int);
int linearSearchArrayGaddis(const int[], int, int);
int binarySearchArrayGaddis(const int[], int, int);

// this set vector values
void initializeVectorAscending(std::vector<int> &);
void initializeVectorDescending(std::vector<int> &);
void initializeVectorRandom(std::vector<int> &);

#endif
