#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int numero,i,res,p;
	cout <<"Digite un numero entero ";
	cin>> numero;
	i=3;
while(i<=5){
	res=numero%i;
if(res==0){
	cout <<"Es el numero es multiplo de" <<i <<"\n";
}	
	i=i+1;
}

	return 0;
}
