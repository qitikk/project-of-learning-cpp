#include <iostream>
using namespace std;
int bisearch(int arr[],int n,int key){
    int l=0,r=n-1;
    while(l<=r){
        int i=(r+l)/2;
        if(arr[i]==key)return i;
        if(arr[i]>key){r=i-1;}
        if(arr[i]<key){l=i+1;} 
   }
   return 0;
}
int main() {
    int  arr[] = { 4,10,17,18,20,21,22,23,25,26,27,30,33,38,40,45,50 }, s;
    s = bisearch(arr, 17, 27);
	cout << "27在数组中的位置为：" << s << endl;
}




