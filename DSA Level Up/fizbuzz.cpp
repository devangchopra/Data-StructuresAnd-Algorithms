#include<vector>
#include<string>
#include<iostream>
using namespace std;

//Complete this method, don't write main
vector<string> fizzbuzz(int n){
	vector<string>v;
	for(int i=1;i<=n;i++)
	{
		if(i%15==0)
		{
			v.push_back("FizzBuzz");
		}
		else if(i%5==0)
		{
			v.push_back("Buzz");
		}
		else if(i%3==0)
		{
			v.push_back("Fizz");
		}
		else
		{
			v.push_back(to_string(i));
		}
	}
	return v;
}
int  main()
{
	int i=15;
	vector<string>s=fizzbuzz(17);
	for(auto i : s)
	{
		cout<<i<<" ";
	}
}