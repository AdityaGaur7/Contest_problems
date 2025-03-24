#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[3][3];
        for (int i = 0; i < 3; i++)
        {

            for (int j = 0; j < 3; j++)
            {

                cin >> a[i][j];
            }
        }
  int row = 0, col = 0;
        for (int i = 0; i < 3; i++)
        {

            for (int j = 0; j < 3; j++)
            {

                if(a[i][j]=='?'){
                    row = i;
                    col = j;
                    break;
                }
            }
        }

        set<char>s;
        for(int i = 0 ; i<3;i++){
            if(a[row][i]!='?')s.insert(a[row][i]);

        }
     
     map<char,int>mp;
     
        for(auto it:s){
          mp[it]++;
        }
        for(char i = 'A';i<='C';i++){
            mp[i]++;
        }
         for(auto it:mp){
          if(it.second==1)cout<<it.first<<endl;
        }
        
    }
    return 0;
}