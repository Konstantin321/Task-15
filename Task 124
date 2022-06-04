#include <iostream>
 
int main() {
    int row;
    int col;
    int n;
    int m;
    
    std::cin >> row >> col;
    
    int road[row + 1];

    for (int i = 0; i <= row; i++)
    {
        road[i] = 0;
    }
    
    for (int i = 0; i < col; i++)
    {
        std::cin >> n >> m;
        road[n]++;
        road[m]++;
    }

    for (int i = 1; i < row; i++) 
    {
        std::cout << road[i] << " ";
    }
    std::cout << road[row];
    return 0;
}
