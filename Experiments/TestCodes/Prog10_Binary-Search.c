// Program for binary search demonstrating complex structure.


int BinarySearching(int arr[], int max, int element)
{
	int low = 0, high = max - 1, middle;
	while(low <= high)
	{
		middle = (low + high) / 2;
		if(element > arr[middle]){
			low = middle + 1;}	
		else {if(element < arr[middle]){
			high = middle - 1;}		
		else{
			return middle;}}
	}
	return -1;
}

main()
{
	int cnt = 1, elem, lim, arr[50], pos;
	printf("Enter the Limit of Elements in Array:\t");
	lim = read(); 
	scanf("%d", &lim);
	for(cnt = 0; cnt < lim; cnt++)
	{
		
		scanf("%d", &arr[count]);
	}
	printf("Enter Elements in Array: \n");
	arr[cnt]=read();
	printf("Enter Element To Search:\t");
	elem = read();
	scanf("%d", &elem);
	pos = BinarySearching(arr, lim, elem);
	if(pos == -1)	
	{
		printf("Element %d Not Found\n", elem);
	}
	else
	{
		printf("Element %d Found at Position %d\n", elem, pos + 1);
	}
	
}





