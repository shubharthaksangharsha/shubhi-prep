#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void input(vector<string>&nums){
   for(auto &i : nums){
       cin >> i;
   }
}
void display(vector<string>nums){
    for(auto const i : nums){
        cout << i << ' ' ;
    }
    cout << endl;
}
vector<string> findRestaurant(vector<string>list1, vector<string>list2){
    unordered_map<string,int>dict1, dict2,dict3;
    vector<string>res;
    for(int i = 0; i < list1.size(); i++){
        dict1.insert(make_pair(list1[i], i));
    }
    for(int i = 0; i < list2.size(); i++){
        dict2.insert(make_pair(list2[i], i));
    }
    for(auto i: dict2){
        if (dict1.find(i.first) != dict1.end()){
            dict3.insert(make_pair(i.first, dict1[i.first] + dict2[i.first]));
        }
    }
    int temp = 0;
    for(auto i: dict3){
        
    }
    
    

}
int main()
{
    int m, n;
    cin >> m >> n;
    vector<string>list1(m), list2(n);
    input(list1);
    input(list2);
    display(findRestaurant(list1, list2));
    return 0;
}