

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n , a , b ;
        cin>>n;
         a = n/3;
            b=n/3;
        if(n%3==1){
           
            a=a+1;
        }else if(n%3==2){
            b=b+1;
        }
        cout<<a<<" "<<b<<endl;
            
        }
    

    return 0;
}