#include <iostream>
#include <string>
using namespace std;///�ҥH����N���μgstd::
int main(){
    string s;
    cout<<"�п�J�@�ӫܪ����r��A�������n���Ů�:";
    cin>>s;
    cout<<"�r��"<<s<<"�����׬O"<<s.length()<<"\n";
    for(int i=0;i<s.length();i++){
        cout<<i<<":"<<s[i]<<endl;
    }
}
