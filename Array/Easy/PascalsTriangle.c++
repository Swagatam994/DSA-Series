#include<bits/stdc++.h>
using namespace std;

// function to find an element on the pascal's triangle formula= C(col-1,row-1)
void findElement(int row,int col){
    int result=1;
    int n=row-1;
    int k=col-1;
    for(int i=0;i<k;i++){
        result*=(n-i);
        result/=(i+1);
    }

    cout<<"The ("<<col<<row<<")elemnt is "<<result;
}

// Function to print the given row of pascals triangle
void PrintRow(int n){
    cout<<"1 ";
    long ans=1;
    for(int i=1;i<n;i++){
        ans*=(n-i);
        ans/=i;
        cout<<ans<<" ";
    }
}

// Function To generate a pascal triangle
vector<int> generateList(int row){
    vector<int>ansRow;
    long long ans=1;
    ansRow.push_back(1);
    for(int i=1;i<row;i++){
        ans*=(row-i);
        ans/=i;
        ansRow.push_back(ans);
    }
    return ansRow;

}

void PrintTriangle(int n){
    vector<vector<int>> triangle;
    for(int i=1;i<=n;i++){
        triangle.push_back(generateList(i));
    }
    for(auto row:triangle){
        for(int val:row ){
            cout<<val <<" ";
        }
        cout<<"\n";
    }
}
int main()
{
   int n=6;
//    findElement(6,3);
//    PrintRow(n);
    PrintTriangle(n);
}