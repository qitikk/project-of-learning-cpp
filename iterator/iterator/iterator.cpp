#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int>arr = { 14,8,10,15,23,27,30,33,36,40 };
	vector<int>::const_iterator iter1 = arr.begin();
	//创建迭代器iter1，指向数组arr的第一个元素，即arr[0],值为14.
	for(iter1;iter1!=arr.end();iter1++)
		//使用迭代器iter1遍历数组，指向数组arr的元素，即arr[0],arr[1],arr[2]...arr[9]
		cout<<*iter1<<" ";


}