int missingNumber(int arr[], int n) { 
    
    int index=1,new=n+1;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {   if(arr[i]==index)
                index++;
            else
               { new=index;}
        }
    }
    
    return new;
    
} 
