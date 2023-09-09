//Find the number of possible paths on an m x n gris form top left grid ([0][0]) to bottom right grid([m-1][n-1]). Having constraint that from each cell you can either move only to right or down.

/* Approach 
I  used recursion  to count the number of ways to reach the bottom-right corner of a given grid with dimensions 'm' by 'n', starting from the top-left corner. The function 'count_ways' makes recursive calls by updating the indices to either move one step right or one step down and returning the sum of these recursive calls. If either of the indices exceed the grid size, the function returns 0 since no further ways can be explored from that point. If the indices reach the bottom-right corner, the function returns 1 to indicate that a path has been found.*/

#include<iostream>
using namespace std;
//Approach 1:
/*int count_ways(int m, int n, int xidx, int yidx) {
    if (xidx == m - 1 && yidx == n - 1) {
        return 1;  // You have reached the destination, return 1 to indicate a valid path.
    }
    
    int ways = 0;  

    if (xidx < m - 1) {
        ways += count_ways(m, n, xidx + 1, yidx);
    }
    if (yidx < n - 1) {
        ways += count_ways(m, n, xidx, yidx + 1);
    }
    
    return ways;  
}*/
//Approach 2:
int count_ways(int m, int n, int xidx, int yidx){
    if(xidx==m-1 && yidx==n-1) return 1;
    if(xidx>=m || yidx>=n) return 0;
    return count_ways(m,n,xidx+1,yidx)+count_ways(m,n,xidx,yidx+1);
}

int main() {
    int m, n;
    cout << "Enter values of m and n: ";
    cin >> m >> n;

    int result = count_ways(m, n, 0, 0);
    cout << "Number of ways: " << result << endl;

    return 0;
}
