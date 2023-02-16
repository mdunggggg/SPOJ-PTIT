#include <iostream>
#include <algorithm>
using namespace std;

int main () 
{
    long long a, b, c;
    cin>>a>>b>>c;
    long long d[5];
    d[0]=a+b+c;
    d[1]=2*a+2*b;
    d[2]=2*a+2*c;
    d[3]=2*b+2*c;
    sort (d, d+4);
    cout<<d[0];

    return 0;
} 
/*
Bài này để ngắn gọn thì chỉ ta chỉ xét các trường hợp chính sau:
- Nhà -> CH1 -> CH2 -> Nhà
- Nhà -> CH1 -> Nhà -> CH2 -> Nhà
- Nhà -> CH1 -> CH2 -> CH1 -> Nhà
- Nhà -> CH2 -> CH1 -> CH2 -> Nhà
Lưu ý: Chỉ xét đến quãng đường nên Nhà -> CH1 và CH1 -> Nhà, ... là như nhau.
*/