#include <iostream>
using namespace std;
int main(){
    srand((unsigned int)time(NULL));
    int input;
    cout << "请输入随机数的最大值" << endl;
    cout << "例：如果输入100，就会随机输出0-99" << endl;
    cin >> input;
    cout << "结果是：" << rand() % input << endl;
    system("pause");}
