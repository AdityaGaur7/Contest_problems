#include<iostream>
using namespace std;
int main(){


int w;
cin>>w;
bool a;
int i=1,j=w-1;
while(i<w/2 && j>=w/2){
    if((i+j)==w && i%2==0 && j%2==0){
cout<<"yes"<<i << j<<endl;
a=true;
break;
    }
    else{
        cout<<"no"<<i<<j<<endl;
       a=false;
       break;
    }
    i++;j--;
}
if(a==true)cout<<"yes";
else{
cout<<"NO";
}

    return 0;
}