//By Shubharthak
//Importing libraries
#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

struct item{
    /*
    create a struct of item which contains have value and weight.
    */
    int value;
    int weight;
}; 

void input(vector<struct item>&nums){
    /*
    input the value and weight from the user.
    input vector<struct item>
    output: void
    */    
    cout << "Please Enter the Value of the item: ";
    for(auto &i : nums){
       cin >> i.value;
   }
    cout << "Please Enter the Weight of the item: ";
    for(auto &i : nums){
       cin >> i.weight;
   }
}

void display(const vector<struct item>nums){
    /*
    display the value and weight of the items vector
    input: const vector<struct item>
    output: void
    */
    cout << "Value\tWeight\n";
    for(auto const i : nums){
        cout << i.value <<'\t'<< i.weight << endl;
    }
}

double fractionalKnapsack(int W, const vector<struct item> &items){
    /*
    calculate the maximum profit from the given vector of items 
    input: W: int, items: const vector<struct item>
    output: answer: double
    */
    vector<pair<double, int>>v;  //For storing the ratio,index
    for(int i = 0; i < items.size(); i++){
        double temp = (items[i].value * 1.0) / (items[i].weight * 1.0); //Calculating the ratio 
        v.push_back(make_pair(temp, i)); //Making the pair of of ratio:index 
    }
    sort(v.begin(), v.end(), greater<pair<double, int>>()); //Sorting in decreasing order 
    int currW = 0; //Stores the current weight of the Result
    double answer = 0; //Stores the answer i.e maximum profit 
    for(int i = 0; i < v.size(); i++){
        if (currW + items[v[i].second].weight < W){ //if Knapsack is not full then push the current ratio in the answer
            answer += items[v[i].second].value;
            currW += items[v[i].second].weight;
        } else{ //If Knapsack is full then take the left ratio and push it in the answer and exit the loop.
            double temp = (W - currW) * 1.0; 
            answer += (temp * v[i].first);
            break;
        }
    }  
    return answer; //Return the maximum profit
}

//Driver Code
int main()
{
    int W, n;
    cout << "Please Enter the Weight of Knapsack: ";
    cin >> W;
    cout << "Please Enter total items: ";
    cin >> n;
    vector<struct item>items(n);
    input(items);
    display(items);
    cout << "Maximum Profit will be earned: " << fractionalKnapsack(W, items) << endl;
    return 0;
}
