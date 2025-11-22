#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    vector<int>v = {1,2,2,1,2};
    int n = v.size();

    for(int i = 0;i<n;i++){

        int freq = 0;

        for(int j = 0;j<n;j++){

            if(v[i] == v[j]){

                freq++;

            }
        }

        if(freq>n/2){

            cout<<v[i];
            break;

        }

    }
    
    return 0;
    
}