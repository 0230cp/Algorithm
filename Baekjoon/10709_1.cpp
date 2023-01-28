#include <bits/stdc++.h>
using namespace std;

char arr[104][104];
int ret[104][104];
int h,w,d;
bool cloud;
vector <char> v;
vector <int> v2;

int main(){
	cin >> h >> w;
	
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			cin >> arr[i][j];
		}
	}
	
	for(int i = 0; i < h; i++){
		for(int j = 0; j< w; j++){
			v.push_back(arr[i][j]);
		}
		
		auto a = find(v.begin(), v.end(), 'c');
		d = 0;
		cloud = 0;
		if(a != v.end()){
			for(char k : v){
				if(k == 'c'){
					d = 0;
					cloud = 1;
					v2.push_back(d);
				}else{
					if(cloud){
					d++;
					v2.push_back(d);
				}else{
					d = -1;
					v2.push_back(d);
				}
				}
			}
			for(int k = 0; k < w; k++){
				ret[i][k] = v2[k];
			}
		}else{
			for(int k = 0; k < w; k++){
				ret[i][k] = -1;
			}
		}
			
		v.clear();
		v2.clear();
	}
	
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			cout << ret[i][j] << " ";
		}
		cout << "\n";
	}	
}
