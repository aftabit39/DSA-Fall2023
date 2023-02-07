#include<iostream>
using namespace std; 
int main(){
	char ch; 
	
	cout<<"Enter a character: ";
	cin>>ch; 
	
/*	if(ch=='a')
		cout<<"Vowel Character."<<endl; 
	else if(ch=='e')
		cout<<"Vowel Character."<<endl;  
		 else if(ch=='i')
			cout<<"Vowel Character."<<endl; 
			  else if(ch=='o')
				cout<<"Vowel Character."<<endl; 
				   else if(ch=='u')
					cout<<"Vowel Character."<<endl; 
					    else 
					    	cout<<"Consonent Character.";*/
	
	switch(ch){
		case 'a': cout<<"Vowel Character."<<endl; break;
		case 'e': cout<<"Vowel Character."<<endl; break;
		case 'i': cout<<"Vowel Character."<<endl; break;
		case 'o': cout<<"Vowel Character."<<endl; break;
		case 'u': cout<<"Vowel Character."<<endl; break;
		case 'A': cout<<"Vowel Character."<<endl; break;
		case 'E': cout<<"Vowel Character."<<endl; break;
		case 'I': cout<<"Vowel Character."<<endl; break;
		case 'O': cout<<"Vowel Character."<<endl; break;
		case 'U': cout<<"Vowel Character."<<endl; break;
		default: cout<<"Consonent Character"<<endl;
		
	}
	
	return 0;
}
