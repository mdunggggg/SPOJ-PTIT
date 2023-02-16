#include <iostream>
using namespace std;

int main ()
{
    long C, K;
    cin>>C>>K;
    // try: C = 1284, K = 2
    long min_money = 1;
    for (int i=1; i<=K; i++)
        min_money*=10;  
    
    long case_1 = (C/min_money)*min_money;    
    long case_2 = case_1 + min_money;   
    
    if (C-case_1 >= case_2-C)    
        cout<<case_2;
    else cout<<case_1;
    return 0;
}