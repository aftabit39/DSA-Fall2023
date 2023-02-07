#include<iostream>
using namespace std;
int main(){
	int m[5]= {1,2,3,4,5};
	
	for(const int &n:m)
		cout<<n<<" ";
	
	
	return 0;
}
