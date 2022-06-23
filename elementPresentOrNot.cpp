#include<iostream>
using namespace std;
int isPresent(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int element;
    cin>>element;
    int i = isPresent(arr,n,element);
    if(i==-1){
        cout<<"element is not present"<<endl;
    }else{
        cout<<"element is present at index"<<" "<<i<<endl;
    }
}