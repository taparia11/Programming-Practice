#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> prim;
void primeFactors(int n)  
{  
    for (int i = 3; i <= n; i = i + 2)  
    { 
        while (n % i == 0)  
        {  
            n = n/i;  

            prim.push_back(i);  
        }  
    }  
    if (n > 2)  
            prim.push_back(n);  
}  
  

int main(){
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		primeFactors(n);
		int alice=0, bob=0;
		for(auto it=prim.rbegin();it!=prim.rend();){
			if(alice<=bob){
				if((n- (*it))<0)
					break;
				n = n- (*it);
				alice++;
			}
			else{
				if((n- (*it))<0)
					break;
				n = n- (*it);
				bob++;
			}
			if(n==0)
				break;
			if((*it)>n)
				it++;
		}

		prim.clear();
		if(alice==bob)
			cout<<"Bob"<<endl;
		else
			cout<<"Alice"<<endl;

	}
	
	return 0;
}