  // Name: Justen Phillips
  // Course: CIS 006 Intro to programming
  // CRN: 20577
  // Date: 3/20/2017
  // Assignment: MergeSort
     #ifndef MERGESORT_H
     #define MERGESORT_H
     #include <cstdio>
     #include <cstdlib>
    #include <fstream>
    #include <iostream>
    
    using namespace std;
    
    bool readBin(int32_t [], int32_t);//read to file
    bool mergeSort(int32_t arr[], int32_t l, int32_t r);//sort
    void merge(int32_t [], int32_t, int32_t, int32_t);//merge
    //void showArray(int32_t [], int32_t); test stub
    bool writeBin(int32_t [], int32_t);//write to file
    
    #endif
   
