#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void operation(vector<int> v1, vector<int> v2), pair <int, int> &avg){
    auto first = min_element(v1.begin(),v1.end());
    auto second = max_element(v2.begin(),v2.end());
    avg.first = *first;
    avg.second = *second;
}
int main(){
    vector<int> v1(10, 9);
    vector<int> v2(10, 10);
    pair <int, int> avg;
    operation(v1, v2, avg);
    cout << "Min element of v1: " << avg.first << endl;
    cout << "Max element of v2: " << avg.second << endl;  
    cout<<"average of min and max element is: "<<(avg.first+avg.second)/2<<endl;
}