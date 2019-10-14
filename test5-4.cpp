#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(){
    string line;
    // 读取一行数据
    while(getline(cin, line)){
        int sum = 0, x;
        // 创建一个字符流ss, 读取速度很慢
        stringstream ss(line);
        while(ss>>x){
            sum += x;
        }
        cout<<sum<<endl;
    }
    return 0;
}

