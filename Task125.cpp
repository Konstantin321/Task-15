#include <iostream>
 
int main() {
    int n;
    int count = 0;
    
    std::cin >> n;
    
    int arr[n][n];
    int color[n];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        std::cin >> color[i]; 
    }
    
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i][j]) {
                if (color[i] != color[j]) {
                    count++;
                }
            }
        }
    }
    std::cout << count;
    return 0;
}
