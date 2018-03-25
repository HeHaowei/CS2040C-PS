#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
	unordered_map<string, pair<string,int>> m;
	m["Lam"]=make_pair("Ranald",21);
	cout<<m["Lam"].first<<endl;
}
