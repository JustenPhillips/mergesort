  // Name: Justen Phillips
     // Course: CIS 006 Intro to programming
     // CRN: 20577
     // Date: 3/20/2017
     // Assignment: MergeSort
     #include "Mergesort.h"
     
     bool readBin(int32_t array[], int32_t size)//read file into array
     {
        int32_t buff;
    
        fstream readFile;//read file instance
    
        readFile.open("threesData.bin", ios::in | ios::binary);//open bin
        
        int32_t index = 0;//set index subscript to 0
        if (readFile.is_open())
        {
            do
            {//load each int value from file into array
                readFile.read(reinterpret_cast<char *>(&buff), sizeof(int32_t));
    
                if (index < size)
                {
                    array[index] = buff;
                    ++index;//increment subscript, step through array iterations
                }
                else//error out
                {
                    cout << "file has too many values!" << endl;
                    return false;
                }
            } 
            while (!readFile.eof());//loop till end of file
    
            readFile.close();//close file
            return true;//return successful
        }
        return false;//error out
    }
    
    
        // Merges two subarrays of arr[].
    // First subarray is arr[l..m]
    // Second subarray is arr[m+1..r]
    void merge(int32_t arr[], int32_t l, int32_t m, int32_t r)
    {
        int32_t i, j, k;
        int32_t n1 = m - l + 1;
        int32_t n2 =  r - m;
     
       /* create temp arrays */
        int32_t L[n1], R[n2];
     
        /* Copy data to temp arrays L[] and R[] */
        for (i = 0; i < n1; i++)
            L[i] = arr[l + i];
        for (j = 0; j < n2; j++)
            R[j] = arr[m + 1+ j];
     
        /* Merge the temp arrays back into arr[l..r]*/
        i = 0; // Initial index of first subarray
        j = 0; // Initial index of second subarray
        k = l; // Initial index of merged subarray
        while (i < n1 && j < n2)
        {
            if (L[i] <= R[j])
            {
                arr[k] = L[i];
                i++;
            }
            else
            {
                arr[k] = R[j];
                j++;
            }
            k++;
        }
     
        /* Copy the remaining elements of L[], if there
           are any */
        while (i < n1)
        {
            arr[k] = L[i];
            i++;
            k++;
        }
     
        /* Copy the remaining elements of R[], if there
           are any */
        while (j < n2)
        {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
     
    /* l is for left index and r is right index of the
      sub-array of arr to be sorted */
   bool mergeSort(int32_t arr[], int32_t l, int32_t r)
   {  
   
       
       if(l < r)
       {
           // Same as (l+r)/2, but avoids overflow for
           // large l and h
           int32_t m = l+(r-l)/2;
    
           // Sort first and second halves
           mergeSort(arr, l, m);
           mergeSort(arr, m+1, r);
    
           merge(arr, l, m, r);
       }
   
       return true;//succesful
   
   }
   
   
   void showArray(int32_t array[], int32_t size)
   {
       for(int count=0; count < size; count++)
           {cout <<  count << " " << array[count] << endl;}
   }
   
   bool writeBin(int32_t array[], int32_t size)
   {//write array into file
   	   ofstream writeFile;
   	   writeFile.open ("sortedThreesData.bin", ios::out | ios::binary);
   	   if(writeFile.is_open())
   	   {	for(int i=0;i<size;i++)//write each value from array to file
   	   		{writeFile.write(reinterpret_cast<char *>(&array[i]), sizeof(int32_t));}
   	   }
   	   else
   	   {
   		   return false;//error out
   	   }
   	   writeFile.close();
   	   return true;//success
   }
