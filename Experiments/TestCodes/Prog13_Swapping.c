//program to swap two number using pointers.

void swap(int * x, int * y)
{
    
    int temp;
    temp = *x;
    *x=*y;
    *y = temp;


}
 main()
{
    	int a, b = 10;
 	printf("Enter First Number");
  	scanf("%d",&a);
  

    	// address of a and b is passed to the swap function
    	swap(&a, &b);
}



