#include <iostream>
#include <vector>
using namespace std;

int n, x;
vector<int> v; // �̱��ȣ, ����

int main(int argc, char **argv){
  scanf("%d",&n);

  for(int i=1; i<=n; i++){
    scanf("%d", &x);
    v.insert(v.begin() + x, i); // � ��ġ��, � �� �� ������
  }


  for(int i=n-1; i>= 0; i--){ // ���� ���
    cout << v[i] << " ";
  }

  return 0;
}
