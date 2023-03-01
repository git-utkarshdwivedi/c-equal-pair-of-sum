// This code finds the mode of any array and also changes  the value in minimum operations , 
#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc>0)
	{
	  int n;
	    cin>>n;
	  int a[n];
	  for(int i=0; i<n; i++)
	  {
	      cin>>a[i];
	  }
	    int maxval=0,count=0,maxcount=0;
	    for(int i=0;i<n; i++)
	    {count=0;
	        for(int j=i+1; j<n; j++)
	        {
	            if(a[i]==a[j])
	            {count++;

	            }
	        }
	        if(count>maxcount)
	        {
	            maxcount=count;
	            maxval=a[i];
	        }
	    }
	    int N=n-maxcount-1;
	    cout<<N<<endl;
	    
	tc--;
	    
	}
	return 0;
}
