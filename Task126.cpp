#include <iostream>
 
int main() {
    int n;
    int lenght = 3001;
    int newLenght;
    
    std::cin >> n;
    
    int arr[n][n];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < (n - 2); i++)
    {
        for (int j = i + 1; j < (n - 1); j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                newLenght = arr[i][j] + arr[j][k] + arr[i][k];
                if (newLenght < lenght)
                {
                    lenght = newLenght;
                }
            }
        }
    }
    
    std::cout << lenght;
    return 0;
}
