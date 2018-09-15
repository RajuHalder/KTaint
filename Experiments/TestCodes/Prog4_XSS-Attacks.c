// Program that demonstrates XSS attacks. We assume here that variable 'a' have coockies information of websites. Attacker  judge the cookies information at program point 8 (if(z<=a)) making either x = 1 or y = 1 at program point 9 or 10 respectively. This may allow attacker to execute any query at program point 12 or 14.

main()
{ 
	int x,y,z,a;
 	x = 0;
 	y = 0;
	printf("Please enter the input: ");
 	z = read( );
 	if ( z <= a)
 	{
  		x = 1;
 	}
 	else
 	{
  		y = 1;
 	}
 	if( x == 0)
 	{
    		x = a;
 	}
 	if( y == 0)
 	{
   		y = a;
 	}
}

