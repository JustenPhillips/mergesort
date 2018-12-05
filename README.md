# mergesort
Mergesort.cpp
Requested files: Mergesort.h, Mergesort.cpp, Mergesort_test.cpp (Download)
Type of work: Individual work

For this program, you will learn about using an index into an array to sort the array contents. The chapter gives you several examples of implementing sorts using indices into an array.

Your program must open the binary file threesData.bin and read each element into an array. Once the integers have been read in, you will write one or more functions that sorts the integers in the array into ascending order (low to high.) Your program should sort this array using the Mergesort. 

Mergesort is a method that uses divide and conquer to sort a list of items. 

    Divide the list into two equal or nearly equal lists.
    Sort each half of the list into ascending order using selectionsort from the textbook..
    Merge the two sorted lists into one sorted list by repeatedly removing the smaller of the two items at the front of each list and putting it in the final array.

Your program should be organized using the practice we have adopted: Mergesort.h, Mergesort.cpp and Mergesort_test.cpp which contains your main() function.

Your program should write the sorted data to a file name "sortedThreesData.bin"  This file will be examined to determine your grade.
