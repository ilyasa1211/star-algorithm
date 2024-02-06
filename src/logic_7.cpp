#include <iostream>
#include <cmath>

// * * * * * * * * * 
//   * * * * * * *   
//     * * * * *     
//       * * *       
//         *         
//       * * *       
//     * * * * *     
//   * * * * * * *   
// * * * * * * * * * 

int main(int argc, char const *argv[])
{
    const int count = 9;
    const int half = count / 2;
    const char symbol = '*';
    const char space = ' ';


    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            bool condition1 = i <= j;
            bool condition2 = i + j > count - 1;
            bool condition3 = i + j >= count - 1;
            bool condition4 = i < j;

            if (condition1 ^ condition2 || condition4 ^ condition3)
            {
                std::cout << symbol << space;
                continue;
            } 

            std::cout << space << space;
        }

        std::cout << std::endl;
    }

    return 0;
}
