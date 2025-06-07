#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#define MAX 100

int k, n;           // Giá trị cho trước
int arr[MAX];       // Mảng a
int len;            // Số phần tử sẽ được sử dụng

std::ifstream input("input.txt");
std::ofstream output("output.txt");

int step(){
    return 1;
}

int solution(){
    step();
    step();
    output <<  1 << " " << 2 << " " << 3;
    return 0;
}
int main()
{
    std::string line;
    
    std::getline(input, line);
    k = std::stoi(line);
    
    std::getline(input, line);
    n = std::stoi(line);

    std::getline(input, line);
    std::stringstream ss(line);
    for(int i = 1; i <= n; i++){
        ss >> arr[i];
    }

    solution();
    
    return 0;
}