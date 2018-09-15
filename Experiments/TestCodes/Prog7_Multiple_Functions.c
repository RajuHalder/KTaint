// C program to find average of three number using multiple function

int add(int a,int b,int c)
{
int res;
res = a + b + c;
printf("Addition Body\n");
return res;
}

int Avg(int p,int q,int r)
{
int s,avg;
s = add(p,q,r);
avg = s/3;
printf("Average Body\n");
return avg;
}

main()
{
	printf ("Program to perform addition using fuction: \n");
int x,z,y,m; 
x = read();
y = read();
z = read();
m = Avg(x,y,z);
}


