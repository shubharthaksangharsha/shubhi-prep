#include<iostream>
#include<vector>
using namespace std;
void input(vector<vector<int>>matrix, int n){
    cout << "Please enter the values" << endl;
    for(int i = 0; i < matrix.size(); i++){
       for(int j = 0; j < n; j++){
           cin >> matrix[i][j];
       }
   }
}
void display(vector<vector<int>>matrix, int n){
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    int m, n;
    cin >> m >> n; 
    vector<vector<int>>matrix1(0, m);
    input(matrix1, n);
    display(matrix1, n);
    return 0;
}