# include <iostream>
using namespace std;

main ()
{
	int x = 5;
	int *p;
	int **t;
	int **pp;
	int ***p2;
	*p=x;//5
	t=&p;//100
	pp=&p;//102
	p2=&pp;//104
	cout<<&x <<" "<<t <<" " <<*p<<" "<<pp<<" "<<endl;//-->addx=100 adx=100 valuex=5 addp=102
	*t=3;
	cout<<" "<<x <<" "<<*t<<" "<<*pp<<" "<<**pp<<" "<<*p2<<" "<<**p2<<" "<<***p2; 
	  
}
