#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T)
    {
        int N,sum=0,p,K,D,A[1000];
        cin>>N>>K>>D;
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        for(int i=0;i<N;i++)
        {
            
            sum=sum+A[i];
        }
        p=sum/K;
        if(p<D)
        {
          cout<<p<<"\n";  
        }
        else
        {
            cout<<D<<"\n";
        }
        T--;
    }
	// your code goes here
	return 0;
}
