#include "iostream"

int main()
{
    /* Complexity O(1) 
    Với những lệnh thực thi đơn giản như là các phép toán nguyên thủy    
    */
    int x = 1;
    x + 2;
    x > 0;

    /* Complexity O(log n)
    Bài toán sắp xếp theo cách tối ưu, tương đối khó
    Ví dụ có một mảng, 
    arr = [1,5,,8,9,15,20,21,25,27,30,33,35,39,40]
    
     */

     

    /* Complexity O(n) 
    Thuật toán để tính tổng các phần tử trong mảng
    Thuật toán có độ phức tạp là hàm linear, input càng nhiều thì thời gian giải quyết càng lâu
    */
    const int max = 5; 
    int arr_1[max] = {1, 2, 3, 4, 5};
    int sum = 0;
    for(int i = 0; i < 4; i++){
        sum += arr_1[i];
    }

    /* Complexity O(n^2) */
    const int  max_sec = 10;  
    int arr[max_sec] = {1, 2, 3, 4, 5, 6, 1, 8, 9, 10};
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(i == j){
                continue;
            }else{
                if (arr[i] == arr[j]){
                    printf("arr[%d] = arr[%d]", i, j);
                }
            }
        }
    }
    return 0;
}