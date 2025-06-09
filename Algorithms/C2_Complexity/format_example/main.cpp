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
     *
     */
     

    /* Complexity O(n) 
    Thuật toán để tính tổng các phần tử trong mảng
    Thuật toán có độ phức tạp là hàm linear, input càng nhiều thì thời gian giải quyết càng lâu
    */
    const int max = 5; 
    int arr[max] = {1, 2, 3, 4, 5};
    int sum = 0;
    for(int i = 0; i < 4; i++){
        sum += arr[i];
    }

    /* Complexity O(n^2) */

    return 0;
}