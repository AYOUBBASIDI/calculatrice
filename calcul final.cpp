#include <iostream>
#include <iomanip>
# include <stdio.h>
using namespace std;
int main() {
	int choix;
    float num1,num2;
    int a,b,c;
	char opr;
printf ("What do you want to do? \n");
printf ("0= Exit\n1= perform an operation\n2= who the largest number\n");
scanf ("%d", &choix);

if (choix == 1)
{
cout <<"Enter two numbers:\n" ;
	cin >> num1 >> num2;
	cout << endl ;
	cout << "Entrez l'operateur: + (addition), - (soustraction),"  <<  "* (multiplication), / (division):\n";
	cin >> opr ;
	cout << endl ;
	cout  <<  num1  <<  ""  <<  opr  <<  ""  <<  num2  <<  "=" ; 
	switch (opr){
		case'+' :
			cout << num1 + num2 << endl ;
			break ;
		case'-'	:
			cout << num1 - num2 << endl ;
			break ;
		case'*' :
		    cout << num1 * num2 << endl ;
		    break ;
		case'/' :
			if  ( num2  !=  0 ) 
		    cout << num1 / num2 << endl ;
		    else 
		    cout << "ERREUR \n Impossible de diviser par zéro" << endl ;
			break ;
		    
	}
}


if (choix == 2)
{
	printf("Enter three numbers integer:\n");
	scanf("%d%d%d", &a, &b, &c);
	
	if (a > b && a > c)
	printf("%d is the largest.", a);
	
	else if (b > a && b > c)
	printf("%d is the largest.", b);
	
	else if (c > a && c > b)
	printf("%d is the largest.", c);
}

if (choix == 0)
{
printf("GOOD BYE");
}

return 0;
}