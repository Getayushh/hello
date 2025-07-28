
#include<iostream>
using namespace std;

int main(){

int arr[6];
cout<<"enter";
int sum=0;
for(int i=0;i<6;i++){
    cin>>arr[i];
    sum+=arr[i];
}
cout<<"avg :"<<sum/6;
}
