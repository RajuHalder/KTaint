//Program demostrating merge sort
 
main()
{
int arr[30],temp[30],i,j,k,n,size,l1,h1,l2,h2;
printf("Enter the number of elements : ");
scanf("%d",&n);
for(i=0;i<n;i=i+1)
{
	printf("Enter element");
	scanf("%d",&arr[i]);
}

for(size=1; size < n; size = size*2 )
  {
  l1=0;
  k=0;
  while( l1+size < n)
    {
       h1=l1+size;
       l2=h1+1;
       h2=l2+size;
       if( h2>=n )
         {
	   h2=n;
         }
       i=l1;
       j=l2;
       while(i<=h1 && j<=h2 )
	 {
	    if( arr[i] <= arr[j] )
          {
		  	h1=l1+size; 
		  	temp[k]=arr[i];
          }
	    	else
           {
		  	j=l2;
			temp[k]=arr[j];
           }
           i = i+1;   
	  }
	j = j+1;
	while(i<=h1)
	{
	  temp[k]=arr[i];
          k=k+1; 
	} 
	i = i + 1;
	while(j<=h2)
	 {
	   temp[k]=arr[j];
           k=k+1; 
         } 
        j = j + 1; 
     }/*End of while*/
   l1=h2+1;
   for(i=l1; k<n; i=i+1)
    {
	temp[k]=arr[i];
	k=k+1; 
    }
    i = i + 1;
    for(i=0;i<n;i=i+1)
    {
      arr[i]=temp[i];
      k=k+1; 
    } 
j= j + 1;    
}//end of for loop
arr[i]=temp[i];

}






