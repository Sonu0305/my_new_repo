#include <iostream>
using namespace std;

int factorial(int n){
	if(n==0)
	return 1;
return factorial(n-1)*n;
}

int main(){
int num;
cout<<"enter number to calculate its factorial"<<endl;
cin>>num;
cout<<"factorial: "<<factorial(num)<<endl;
return 0;
}
