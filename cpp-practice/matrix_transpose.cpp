#include<iostream>
using namespace std;

int main () {

// size of array matrix
int n;
cin>>n;

// declare array matrix
int A[n][n];

// input array elements of matrix
for (int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>A[i][j];
    }
}

// declare transpose array matrix
int A_trans[n][n];

// transpose matrix code

cout<<"transpose of given matrix is "<<endl;

for (int j = 0; j < n; j++)
{
    for (int i = 0; i < n; i++)
    {
        A_trans[j][i]=A[i][j];

        // print transpose array element 
        cout<<A_trans[j][i]<<" "; 
    }
    cout<<endl;
    
}


return 0;
}