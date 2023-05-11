#include<bits/stdc++.h>
using namespace std;

vector<int> segmentTree;

void initSegmentTree(int node, int start, int end){
    if(start == end){
        segmentTree[node] = 1;
        return;
    }
    
    int mid = (start + end) / 2;
    initSegmentTree(node * 2, start, mid);
    initSegmentTree(node * 2 + 1, mid + 1, end);
    segmentTree[node] = segmentTree[node * 2] + segmentTree[node * 2 + 1];
}

void updateSegmentTree(int node, int start, int end, int idx, int diff){
    if(idx < start || idx > end) return;
    
    segmentTree[node] += diff;
    if(start == end) return;
    
    int mid = (start + end) / 2;
    updateSegmentTree(node * 2, start, mid, idx, diff);
    updateSegmentTree(node * 2 + 1, mid + 1, end, idx, diff);
}

int idxCheck(int node, int start, int end, int k){
    if(start == end) return start;
    
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (start + end) / 2;
    
    if(segmentTree[left] >= k){
        return idxCheck(left, start, mid, k);
    }else{
        return idxCheck(right, mid + 1, end, k - segmentTree[left]);
    }
}

void solve(int n, int k){
    segmentTree.resize(n * 4);
    initSegmentTree(1, 1, n);
    
    int current = 0;
    cout << "<";
    
    for(int i = 1; i <= n; i++){
        current = (current + k - 1) % (n - i + 1);
       
        int idx = idxCheck(1, 1, n, current + 1);
        cout << idx;
        
        updateSegmentTree(1, 1, n, idx, -1);
        
        if(i != n){
            cout << ", ";
        }
    }
    
    cout << ">\n";
}

int main(){
    int n, k;
    cin >> n >> k;
    
    solve(n, k);
    
    return 0;
}

