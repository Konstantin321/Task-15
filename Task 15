#include <iostream>
 
int main() {
    int n;
    std::cin >> n;
    int road[n][n];
    int countRoad = 0;
 
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++) 
        {
            std::cin >> road[row][col];
        }
    }
 
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++) 
        {
            if (row < col)
            {
                countRoad += road[row][col];   
            }
        }
    }
    std::cout << countRoad;
}
