///�]��range-based for�j�饲���b C++11 (2011����)�~���
///�p�G�ϥ�C++98(1998�~��C++)�|�L�k���T�sĶ�A����|�X���A�j��X����
///CodeBlocks 17.12�� Setting-Complier �Ĳ�2��-std=c++11
#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cin>>s;
	for(char c:s){
		if(c!='2') cout<<c;
	}
	cout<<'\n';
}
