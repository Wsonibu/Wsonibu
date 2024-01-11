#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cout<<"Nhap so luong gmail muon tao:";cin >> t;
    cin.ignore(); // Xóa ký tu dau tien trong bo nho dem
    map<string,int>mp;
    while (t--){
        string s;
        cout<<"Nhap ho va ten: ";
        getline(cin, s);
        for(int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]); //chuyen ve dang in thuong
        }
        vector<string> v; //Ta tao mot list luu tru du lieu tung chu cai trong ten
        stringstream ss(s); //tach tung tu trong xau s ra
        string word; //luu tru du lieu cua tu
        string res="";
        while(ss >> word)
		    v.push_back(word); //ten nguoi dung dc nhap du lieu vao vecto
        res+= v[v.size()-1]; //in tu cuoi cuoi cung trong xau [cout<<v.back()]
   
        for(int i = 0; i < v.size() - 1; i++){
        	res+=v[i][0];
        	
		}
        if (mp[res]==0){
            cout<<res<<"@gmail.com"<<endl;}
        else{
             cout<<res<<mp[res]+1<<"@gmail.com"<<endl;
             }
        mp[res]++;
		 }
         
    return 0;
}
