#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i=1,number;
 
  int high=100;
  int low=1;

  cout<<"Lower Limit and Higher limit are : "<<low<< " and "<<high<<endl;
// using srand() for  generating a different number for each time
	srand(time(0));

	// Now generating a random number 
	number=rand()%(high-low+1)+1;


	cout<<"Guess a number between high and low case :  ";
     cout<<endl;
	do {

		cin>>n;

		if(number ==n)
		{
			cout<<"Congrats you have guessed right number which is  "<<number<<endl;
			cout<<"Number of turns you have used "<<i;
			i++;
			break;
		}

		else if(number>n){
			cout<<"Low!! Enter a higher number than previous , Number of turns you used is  "<<i<<endl;
			i++;
		}
		else{
			cout<<"High ! Enter a lower number than previous ,Number of turns you have used is  "<<i<<endl;
			i++;
		}
	}while(number!=n);
}