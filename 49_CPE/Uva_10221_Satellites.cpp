#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	double s, a, pi = acos(-1.0);
	string unit;
	
	while(cin >> s >> a >> unit){
		double r = s + 6440.0;
		
		if(unit == "min") a /= 60.0;
		if(a > 180.0) a = 360.0 - a;
		
		double radian = a * (pi / 180.0);
		double arc = r * radian;
        double chord = 2.0 * r * sin(radian / 2.0);

        cout << fixed << setprecision(6) << arc << " " << chord << "\n";
	}
	return 0;
}
