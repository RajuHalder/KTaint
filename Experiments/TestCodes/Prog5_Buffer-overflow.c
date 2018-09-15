// Program demonstrates  buffer overflow error due to out-of-bound assignment in the array.

main()
{
int  a, arr[10],i;
i = read();
printf("enter the value of a : \n");
scanf("%d", &a);
for(i=0;i<40;i++){
  	arr[i]=a; 
}
}
