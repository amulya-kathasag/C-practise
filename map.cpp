#include <iostream>
#include <bits/stdc++.h> //used for maps
using namespace std;

//arrays
int main()
{
    map<string, string> NamNryVar{ 
		{ "School", "tom" }, 
		{ "PUC", "Jerry" }, 
		{ "Engg", "Who"  }
	};
    for(map<string, int>::iterator i=NamNryVar.begin(); i != NamNryVar.end(); i++)
	{
		cout << i->first << endl;
		cout << i->second << endl;
	}
   // cout << NamNryVar["PUC"] << endl;
    }