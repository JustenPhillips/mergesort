     // Name: Justen Phillips
     // Course: CIS 006 Intro to programming
     // CRN: 20577
     // Date: 3/20/2017
     // Assignment: MergeSort
     
     #include "Mergesort.h"
     
     int main(void)
    {   
        /*test stub:array
        int32_t arr[] = {12, 11, 13, 5, 6, 7};
        int32_t arr_size = sizeof(arr)/sizeof(arr[0]);
        //***********
        for(int i=0;i<arr_size;i++)
        {cout << "unsorted " << arr[i] << endl;}
        mergeSort(arr, 0, arr_size - 1);
        for(int i=0;i<arr_size;i++)
        {cout << "sorted " << arr[i] << endl;}*/
        
        const int32_t size = 691;
        int32_t * array = new int32_t[size];
    
        if (NULL == array)
        {
            cout << "Failed to allocate " << size << " bytes of memory!" << endl;
            return -1;
        }
    
    
        if (readBin(array, size))
            {cout<<"file read into memory  successfully"<<endl;
            //showArray(array, size); test stub
    		 // Sort the values.
    			if(mergeSort(array, 0, size-1))
                {// Display the values again.
    			cout << "The sorted values are\n";
    			//showArray(array, size);test stub
    			cout << "Your array "
    			<< "has been successfully "
    			<< "sorted without error."
    			<< endl;}
    			else{cout<<"could not sort file"<<endl;
    			return 0;}
    		   }
    		else
            {cout << "Could not read file into memory"
            << endl;
    		}
    		if(writeBin(array, size))
    		{
    			cout << "your sorted files have been successfully wrote to your new file" << endl;
    		}
    		else
    		{
    			cout<<"file could not write"<<endl;
    		}
    
        delete[] array;
        return 0;
    }
