#include <iostream>

int main() {
    std::cout<<"Input 15 fractional numbers\n";
    float numbers[15];
    float temp;
    for (int i = 0; i < 15; ++i)
    {
        std::cin>>numbers[i];
    }
    for (int i = 0; i < 15; ++i)
    {
        for (int j = 1; j < 15; ++j)
        {
            if(numbers[j-1]<numbers[j])
            {
                temp=numbers[j-1];
                numbers[j-1]=numbers[j];
                numbers[j]=temp;
            }
        }
    }
    for (int i = 0; i < 15; ++i) {
      std::cout<<numbers[i]<<" ";
    }
    return 0;
}
