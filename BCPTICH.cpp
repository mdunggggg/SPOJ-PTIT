#include <iostream>
#include <math.h>
using namespace std;


long long count (long long N)
{
    long long d = 0;
    long long c = sqrt(N);
    long long l, r;
    long long x, y;
    for (long long i=2; i<=c; i++)
    {
        if (N%i==0)
        {
            x = N/i;
            y = i;
            if ((y+x-1)%2==0)
            {
                r = (y+x-1)/2;
                l = x - r;
                if (l>=1 && r>l)
                    d++;
            }
        }
    }
    return d;
}

int main ()
{
    int t;
    cin>>t;
    int n;
    long long X;
    while (1)
    {
        if (t==0) break;
        t--;
        cin>>n;
        cin>>X;
        cout<<n<<" "<<count(2*X)<<endl;
    }
    return 0;
}
/*
Ta có tổng dãy số liên tiếp của: 1, 2, 3, ... n có dạng = (1+n)(n-1+1)/2. Tổng quát hơn nó là: = (r+l)(r-l+1)/2; với: l, l+1, ... r;
Ta thấy rằng N = (r+l)(r-l+1)/2 <=> N*2 = (r+l)(r-l+1);
Coi
r+l = x;
r-l+1 = y;
=> 2*N = x*y => x, y là ước của 2*n (x, y nguyên).
-> Liệt kê các ước của 2*N;
Với mỗi ước thu được là x -> y=N/x; -> Giải hệ tìm được r, l; -> kiểm tra r, l xem có thỏa man không rồi đếm.
*/