#include<vector>
#include<iostream>
using namespace std;

int main()
{
    vector<string> v(4);
	int i;
	
	for(int i=0;i<3;i++)
	{
		cin>>v[i];
	}
	
	cout<<"\nVector 1 - \n";
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;

	
	vector<string> v2(5);
	int j;
	cout<<"\nSize = "<<v2.size()<<endl;
	
	for(int i=0;i<4;i++)
	{
		cin>>v2[i];
	}
	
	cout<<"\nVector 2 - \n";
	
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<" ";
	}
	cout<<endl;
	
	
	vector<string> v3(5);
	int k;
	for(int i=0;i<v3.size();i++)
	{
	    if(v[i] == v2[i])
	    {
	        v3[i] += v[i];
	    }
	    else if(v[i] != v2[i])
	    {
	        v3[i] += v2[i];
	    }
	}
	cout<<"\nFinal content -\n";
	for(int i=0;i<v3.size();i++)
	{
		cout<<v3[i]<<" ";
	}
	cout<<endl;
	return 0;
}