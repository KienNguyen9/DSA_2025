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

/* Chi nhỏ vấn đề */
int stepOne(){
    return 1;
}

/* Giải quyết vấn đề ở hàm này */
/// @brief:
/// @return:  
int solution(){
    int ret = 1;
    stepOne();
    output <<  1 << " " << 2 << " " << 3;
    return ret;
}

int main()
{
    /* Get input values from the input file */
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

    /* Call solution */
    solution();
    
    return 0;
}