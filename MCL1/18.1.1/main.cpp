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
	cout<<"                    -SYSTEM-WIN12-ZDY 开发"<<endl;
	cout<<"                           内部版本:18.1.1"<<endl;
	cout<<"\n\n请稍后...";
	server infos,temp;
	while(true){
		cout<<"请输入Java路径 需要保证兼容 >";
		getline(cin,temp.javapath);
		if(!getfile(temp.javapath)){
			cout<<"Java程序"<<temp.javapath<<"不存在或无权访问"<<endl;
		}else break;
	}
	infos.javapath=temp.javapath;
	while(true){
		cout<<"请输入服务器核心路径 >";
		getline(cin,temp.kernelpath);
		if(!getfile(temp.kernelpath)){
			cout<<"核心"<<temp.kernelpath<<"不存在或无权访问"<<endl;
		}else break;
	}
	infos.kernelpath=temp.kernelpath;
	cout<<"请输入最小内存 单位MB,如2048 >";
	cin>>infos.MinMemory;
	cout<<"请输入最大内存 单位MB,如9216 >";
	cin>>infos.MaxMemory;
	cout<<"准备开服...";
	Sleep(2874);
	system("cls");
	cout<<"WARNING! 该工具只限于内网开服，如果需要和朋友一起玩请使用Frpc穿透软件"<<endl<<"5秒后继续";
	Sleep(5000);
	cout<<"\n\n";
	run(infos);
	system("cls");
	cout<<"Your Minecraft server is closed.\nPress any key for exit.\nWait input..."<<endl;
	system("pause >nul");
	return 0;
}
