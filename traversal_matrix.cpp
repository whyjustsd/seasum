/*
#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }

    int row_start = 0, row_end = n - 1, column_start = 0, column_end = m - 1;
    while (row_start <= row_end && column_start <= column_end) {
        // Traverse the top row
        for (int col = column_start; col <= column_end; col++)
            cout << a[row_start][col] << " ";
        row_start++;

        // Traverse the right column
        for (int row = row_start; row <= row_end; row++)
            cout << a[row][column_end] << " ";
        column_end--;

        // Traverse the bottom row
        if (row_start <= row_end) {
            for (int col = column_end; col >= column_start; col--)
                cout << a[row_end][col] << " ";
            row_end--;
        }

        // Traverse the left column
        if (column_start <= column_end) {
            for (int row = row_end; row >= row_start; row--)
                cout << a[row][column_start] << " ";
            column_start++;
        }
    }

    return 0;
}

//transpose
int main() {
int N = 3;
int A[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
for(int i=0; i<N; i++) {
for(int j=i; j<N; j++) {
//swap
int temp = A[i][j];
A[i][j] = A[j][i];
A[j][i] = temp;
}
}
//print transpose
for(int i=0; i<N; i++) {
for(int j=0 ;j<N; j++) {
cout << A[i][j] << " ";
}
cout << "\n";
}
return 0;
}
int main()
{
int n1,n2,n3;
cin >> n1 >> n2 >> n3;
int m1[n1][n2]; int m2[n2][n3]; int ans[n1][n3];
for(int i=0; i<n1; i++) {
for(int j=0; j<n2; j++)
cin >> m1[i][j];
}
for(int i=0; i<n2; i++) {
for(int j=0; j<n3; j++)
cin >> m2[i][j];
}
for(int i=0; i<n1; i++) {
for(int j=0; j<n3; j++)
ans[i][j] = 0;
}
for(int i=0; i<n1; i++) {
for(int j=0; j<n3; j++)
{
for(int k=0; k<n2; k++) {
ans[i][j] += m1[i][k]*m2[k][j];
}
}
}
for(int i=0; i<n1; i++) {
for(int j=0; j<n3; j++)
cout << ans[i][j] <<" ";
cout << endl;
}
}*/

#include"bits/stdc++.h"
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int target; cin>>target;
    int mat[n][m];
    for(int i=0; i<n; i++) {
       for(int j=0; j<m; j++)
           cin >> mat[i][j];
    }


bool found = false;
int r = 0, c = n-1;
while(r<m && c>=0){
    if (mat[r][c] == target){
        found = true;
    }
    mat[r][c]>target? c--:r++;
}
if(found){
    cout<<"found";
}
else
    cout<<"not found";

}