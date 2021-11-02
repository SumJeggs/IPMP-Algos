#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main()
{
    int n1, n2, x;
    vector<int> arr1, arr2, unionArr, intArr;
    cin>>n1;
    for(int i=0; i<n1; i++){
        cin>>x;
       // if(i>0){
         /*   if(arr1[i]!=x)
                arr1.push_back(x);
        }
        else*/
        arr1.push_back(x);
    }
    cin>>n2;
    for(int i=0; i<n2; i++){
        cin>>x;
        //if(i>0){
       /*     if(arr2[i]!=x)
                arr2.push_back(x);
        }
        else*/
            arr2.push_back(x);
    }

    int n = n1<n2 ? n1 : n2;
    
    cout<<"\nIntersection: ";
    for(int i=0; i<n; i++)
    {
        if(arr1[i]==arr2[i])
            cout<<arr1[i]<<" ";
        
        else if(arr1[i]<arr2[i])
        {
            for(int j=0; arr1[i]>arr2[j]; j++){
                unionArr.push_back(arr1[j]);
                unionArr.push_back(arr2[j]);
            }
        }

        else{
            
        }
    }
}




