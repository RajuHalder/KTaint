//Program demonstrates factorial operation using iteration in C. 

int fact_it (int i, int f)
{
f=f*i;
return f;
}
 main()
{
	int f=1,i,x;
printf("Enter the number to find the factorial of:");
i = read();
x=i;
for(i;i>0;i--)
{
	f=fact_it(i,f);
}
}








