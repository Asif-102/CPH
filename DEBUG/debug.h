#include<iostream>
using namespace std;
void __print(int x) {cerr << "\033[1;31m" << x << "\033[0m";}
void __print(long x) {cerr << "\033[1;31m" << x << "\033[0m";}
void __print(long long x) {cerr << "\033[1;31m" << x << "\033[0m";}
void __print(unsigned x) {cerr << "\033[1;31m" << x << "\033[0m";}
void __print(unsigned long x) {cerr << "\033[1;31m" << x << "\033[0m";}
void __print(unsigned long long x) {cerr << "\033[1;31m" << x << "\033[0m";}
void __print(float x) {cerr << "\033[1;31m" << x << "\033[0m";}
void __print(double x) {cerr << "\033[1;31m" << x << "\033[0m";}
void __print(long double x) {cerr << "\033[1;31m" << x << "\033[0m";}
void __print(char x) {cerr << '\'' << "\033[1;31m" << x << "\033[0m" << '\'';}
void __print(const char *x) {cerr << '\"' << "\033[1;31m" << x << "\033[0m" << '\"';}
void __print(const string &x) {cerr << '\"' << "\033[1;31m" << x << "\033[0m" << '\"';}
void __print(bool x) {cerr << "\033[1;31m" << (x ? "true" : "false") << "\033[0m";}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << "\033[1;36m" << '{' << "\033[0m"; __print(x.first); cerr << ','; __print(x.second); cerr << "\033[1;36m" << '}' << "\033[0m";}
template<typename T>
void __print(const T &x) {int f = 0; cerr << "\033[1;36m" << '{' << "\033[0m"; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "\033[1;36m" << '}' << "\033[0m";}
void _print() {cerr << "\033[1;33m ] \033[0m"<<endl;}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#define debug(x...) cerr << "\033[1;31m" << #x << "\033[0m" << " = \033[1;33m [ \033[0m"; _print(x)
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}
