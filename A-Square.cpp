/*-  in this problem you have 4 lenghts a,b,c,d you must find that you can make a triangle or not 
--  so you can make a square if all the sides are equal
*/








#include <iostream>
#include<bits/stdc++.h>
 
 
#define Fast   ios_base::sync_with_stdio(false) ; cin.tie(NULL);
#define endl '\n'
typedef long long ll;
 
using namespace std;
 
int main() {
  Fast;
 
 int t;
 cin>>t;
 while (t--)
 {
      int a,b,c,d; cin >> a >> b >> c >> d;
        if (a == b && b == c && c == d)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
 }
 
 
  return 0;
 
 
}