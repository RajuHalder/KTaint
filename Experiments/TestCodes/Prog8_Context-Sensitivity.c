// Motivating Example from "Context-Sensitive Staged Static Taint Analysis for C using LLVM" (https://ece.uwaterloo.ca/~xnoumbis/noumbissi-thesis.pdf)

int compute (int x)
{
int sum = -1;
if(x==2){
sum = sum+x;}
return sum;
}

 main()
{
int x,y,z,w=8;
printf("Please enter the input: ");
x = read();
y = compute(x);
z = compute(w);
}





