#include<iostream>
#include<algorithm>
using namespace std ;
int main ()
{
    unsigned long long a = 0 , b =1  , c , m ,n;
cin >> n >> m ;
if (n <=1 ) cout << n ;
else
{

for (int i = 2 ; i <=n ; i++)
{
    c = a + b  ;
    a = b ;
    b = c ;
}
cout <<c%m ;
}
}
