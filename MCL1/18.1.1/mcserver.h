//MC-Server Header File

#include<iostream>
#include<windows.h>
#include<fstream>
#include<string>

namespace std _GLIBCXX_VISIBILITY(default)
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

	struct server{
		string javapath,kernelpath,
			   MaxMemory,MinMemory;
	};
	
	char* title[]={
		" ¨€¨€¨€¨[   ¨€¨€¨€¨[  ¨€¨€¨€¨€¨€¨€¨[  ¨€¨€¨[  ¨€¨€¨[ ¨€¨€¨[ ¨€¨€¨€¨€¨€¨€¨€¨[ ¨€¨€¨€¨€¨€¨€¨€¨€¨[",
		" ¨€¨€¨€¨€¨[ ¨€¨€¨€¨€¨U ¨€¨€¨X¨T¨T¨T¨€¨€¨[ ¨€¨€¨U  ¨€¨€¨U ¨€¨€¨U ¨€¨€¨X¨T¨T¨T¨T¨a ¨^¨T¨T¨€¨€¨X¨T¨T¨a",
		" ¨€¨€¨X¨€¨€¨€¨€¨X¨€¨€¨U ¨€¨€¨U   ¨€¨€¨U ¨€¨€¨€¨€¨€¨€¨€¨U ¨€¨€¨U ¨€¨€¨€¨€¨€¨€¨€¨[    ¨€¨€¨U",
		" ¨€¨€¨U¨^¨€¨€¨X¨a¨€¨€¨U ¨€¨€¨U   ¨€¨€¨U ¨€¨€¨X¨T¨T¨€¨€¨U ¨€¨€¨U ¨^¨T¨T¨T¨T¨€¨€¨U    ¨€¨€¨U",
		" ¨€¨€¨U ¨^¨T¨a ¨€¨€¨U ¨^¨€¨€¨€¨€¨€¨€¨X¨a ¨€¨€¨U  ¨€¨€¨U ¨€¨€¨U ¨€¨€¨€¨€¨€¨€¨€¨U    ¨€¨€¨U",
		" ¨^¨T¨a     ¨^¨T¨a  ¨^¨T¨T¨T¨T¨T¨a  ¨^¨T¨a  ¨^¨T¨a ¨^¨T¨a ¨^¨T¨T¨T¨T¨T¨T¨a    ¨^¨T¨a"
	};
	
	void run(server args){
		string Run_Cmd=args.javapath+" -Xms"+args.MinMemory+"M -Xmx"+args.MaxMemory+"M -jar "+args.kernelpath;
		//Start server
		cout<<"Æô¶¯ÃüÁîÐÐ:"<<Run_Cmd;
		system(Run_Cmd.c_str());
	}
	int getfile(string filename){
		FILE *gf=fopen(filename.c_str(),"r");
		if(gf){
			fclose(gf);
			return true;
		}else return false;
		return 2;
	}
	
_GLIBCXX_END_NAMESPACE_VERSION
}
