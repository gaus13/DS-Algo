#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
  
    vector<int> v;

    v.push_back(1);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);

    cout<< "Finding number -->  "<< binary_search(v.begin(), v.end(), 1)<<endl;
    
    for(int num : v){
        cout<< num << " ";
    }
    cout<< endl;
    return 0;
}



