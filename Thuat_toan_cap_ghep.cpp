// Thuat toan cap ghep dang 1 cuc dai 2 phia
#include<bits/stdc++.h>
#define ll long long
#define N 1005
using namespace std;
ll n, m, Assigned[N]; // Tao mang Assigned de chua cac gia tri da duoc ghep voi nhau
ll Visited[N], t = 0; // Visited chua nhung gia tri ma minh dang duyet qua
vector<ll> a[N]; // tao Vector chua cac cap gia tri chi so x co gia tri y nao
int visit(ll u) {
	if (Visited[u] != t) Visited[u] = t; // Neu tai gia tri u chua chua co gia tri t thi gan t vao
	else return 0; // Neu co mot gia tri khac <t roi thi tra ve ghep cap =0
	for (ll i = 0; i < a[u].size(); i++) { // Duyet vong lap cua gia tri u co the ghep duoc voi nhung gia tri gi
		ll v = a[u][i]; // Dat bien v = gia tri cua u thu i co the ghep
		if (!Assigned[v] || visit(Assigned[v])) { 
// Neu ma giao cua gia tri do chua co hoac check xem tai gia tri do xem da co cap nao hay chua xet nguoc ve 
			Assigned[v] = u; // Neu thoa man dieu kien tren thi cho u giao voi v
			return 1; // Tra ve duoc 1 lan giao thoa man
		}
	}
	return 0; 
// Neu duyet xong ma khong thoa man nhung dieu kien tren thi chung to gia tri do da co giao
}
main() {
	cin >> m >>n; // Gioi han cua 2 cot 1 va 2
	ll x, y,z; cin >> z; // So lan nhap cap gia tri vao 2 cot
	while (z--){
		cin >> x >> y; // Nhap gia tri cua 2 cot 1 va 2 : x va y
		a[x].push_back(y);
	}
	ll Count = 0; // Cuc dai cap ghep
	for (int i = 1; i <= m; i++) { // Xet phia cot 1
		t++; // Tang gia tri cua cot 1 len 1 don vi de kiem tra
		Count += visit(i); // Tra ve co nen ghep vao hay khong
	}
	cout << Count; // In ra gia tri max cap ghep
}
