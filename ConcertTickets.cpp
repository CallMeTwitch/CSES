#include <iostream>
#include <set>

using namespace std;


int main(){
    multiset<int> tickets;
    int n, m, t;
    
	cin >> n >> m;

	for (int q=0;q<n;q++){
		cin >> t;
        tickets.insert(t);
	}

	for (int q=0;q<m;q++){
		cin >> t;
		auto it = tickets.upper_bound(t);

		if (it == tickets.begin()){
			cout << -1 << '\n';
		} else {
			cout << *(--it) << "\n";
			tickets.erase(it);
		}
	}
}