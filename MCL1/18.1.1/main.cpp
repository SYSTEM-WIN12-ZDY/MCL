//v17.9.2
#include<iostream>
#include<windows.h>
#include"mcserver.h"

using namespace std;

int main(){
	for(int i=0;i<6;i++){
		cout<<title[i]<<endl;
	}
	cout<<"-----MCL Mohist Server Craft Luancher-----"<<endl;
	cout<<"                    -SYSTEM-WIN12-ZDY ����"<<endl;
	cout<<"                           �ڲ��汾:18.1.1"<<endl;
	cout<<"\n\n���Ժ�...";
	server infos,temp;
	while(true){
		cout<<"������Java·�� ��Ҫ��֤���� >";
		getline(cin,temp.javapath);
		if(!getfile(temp.javapath)){
			cout<<"Java����"<<temp.javapath<<"�����ڻ���Ȩ����"<<endl;
		}else break;
	}
	infos.javapath=temp.javapath;
	while(true){
		cout<<"���������������·�� >";
		getline(cin,temp.kernelpath);
		if(!getfile(temp.kernelpath)){
			cout<<"����"<<temp.kernelpath<<"�����ڻ���Ȩ����"<<endl;
		}else break;
	}
	infos.kernelpath=temp.kernelpath;
	cout<<"��������С�ڴ� ��λMB,��2048 >";
	cin>>infos.MinMemory;
	cout<<"����������ڴ� ��λMB,��9216 >";
	cin>>infos.MaxMemory;
	cout<<"׼������...";
	Sleep(2874);
	system("cls");
	cout<<"WARNING! �ù���ֻ�������������������Ҫ������һ������ʹ��Frpc��͸���"<<endl<<"5������";
	Sleep(5000);
	cout<<"\n\n";
	run(infos);
	system("cls");
	cout<<"Your Minecraft server is closed.\nPress any key for exit.\nWait input..."<<endl;
	system("pause >nul");
	return 0;
}
