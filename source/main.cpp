#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	cout<<"Windows PowerShill"<<endl;
    cout<<"版权所有 (C) 9999 Microsoft Corporation。保留所有权利。"<<endl;
    system("color 17");
    while(1>0)
    {
    	string command;
    	cout<<"PS C:>";
    	cin>>command;

    	if(command=="dir")
    	{
    		system("dir c:");
    	}

    	if(command=="ls")
    	{
    		cout<<"你居然想用linux的命令？我让你爽个够!"<<endl;
    		Sleep(2000);
            while(1>0)
            {
                system("dir c:/s");
            }

    	}

        if (command=="about")
        {
            cout<<"版本号:v0.0.2"<<endl;
            cout<<"制作者：Leafdeveloper（啊要开学了，代码内容逐渐偏离主题）"<<endl;
            cout<<"    "<<endl;
            cout<<"此版本只是一个恶搞版本，真正的版本是Microsoft的powershell，如果你要使用，请按住windows键同时按下R键，然后在弹出的“运行”窗口中输入“powershell”，或者更快，您在此命令行里输入“powershell”即可使用。"<<endl;
             cout<<"    "<<endl;
             cout<<"关于“love”指令的代码，参考了“https://blog.csdn.net/GenuineMonster/article/details/81348353?utm_medium=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-1.nonecase&depth_1-utm_source=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-1.nonecase”，特此公布且感谢！"<<endl;
             cout<<"    "<<endl;
             cout<<"    "<<endl;
        }
        if(command=="exit")
        {
            return 0;
        }

        if(command=="cls")
            {
                cout<<"你还敢用windows的命令？我让你cls个够！"<<endl;
                Sleep(2000);
                while(1>0)
                {
                    system("cls");
                }
            }

        if(command=="reset")
        {
            system("cls");
        }

        if(command=="cmd")
        {
            cout<<"正在跳转到cmd，请稍后,您需要等待99999毫秒"<<endl;
            Sleep(99999);
            system("cmd");
        }

        if(command=="powershell")
        {
        	system("powershell");
        }

        if(command=="bash")
        {
        	cout<<"这才像样"<<endl;
        	Sleep(2000);
        	system("cmd");
        }

        if(command=="sl")
        {
        	cout<<"额，你linux命令玩多了么？没有火车，只有关机！"<<endl;
        	Sleep(1000);
        	system("shutdown -s -t 0");
        }
/*
        else
        {
            cout<<"“";
            cout<<command;
            cout<<"”";
            cout<<"不是内部或外部命令，也不是可运行的程序或批处理文件。"<<endl;
        }
*/

        if(command=="love")
        {
            char answer[10];
            printf("表白功能已启用~\n");
            cout<<" "<<endl;
    printf("遇到你\n我才发现\n曾经所有的条件\n似乎都成了我等你的借口\n\n");
    printf("我对你的感情已经决堤\n所以\n请允许我，从今往后映入你\n明媚的眼\n");
    printf("我\n希望\n我能成为一个令人喜爱的开发者！！");
    printf("答应我吧！\n输入yes,肯定一下我，鼓励一下我！如果有no……\n");
    scanf("%s", answer);
    char b[4]="yes";
    if(strcmp(answer,b)==0)
    {
        float y, x, z, f;
    for (y = 1.5f; y > -1.5f; y -= 0.1f)
    {
        for (x = -1.5f; x < 1.5f; x += 0.05f)
        {
            z = x * x + y * y - 1;
            f = z * z*z - x * x*y*y*y;
            putchar(f <= 0.0f ? "*********"[(int)(f*-8.0f)] : ' ');
        }
        putchar('\n');
    }
    long time;
    for (;;)
    {
        system("color a");
        for (time = 0; time<99999999; time++);
        system("color b");
        for (time = 0; time<99999999; time++);
        system("color c");
        for (time = 0; time<99999999; time++);
        system("color d");
        for (time = 0; time<99999999; time++);
        system("color e");
        for (time = 0; time<99999999; time++);
        system("color f");
        for (time = 0; time<99999999; time++);
        system("color 0");
        for (time = 0; time<99999999; time++);
        system("color 1");
        for (time = 0; time<99999999; time++);
        system("color 2");
        for (time = 0; time<99999999; time++);
        system("color 3");
        for (time = 0; time<99999999; time++);
        system("color 4");
        for (time = 0; time<99999999; time++);
        system("color 5");
        for (time = 0; time<99999999; time++);
        system("color 6");
        for (time = 0; time<99999999; time++);
        system("color 7");
        for (time = 0; time<99999999; time++);
        system("color 8");
        for (time = 0; time<99999999; time++);
        system("color 9");
    }
    getchar();

    }
    else
    {
        printf("\n啊这，你居然敢这样？？？干死你丫的！\n");
        Sleep(1000);
        system("shutdown -s -t 0");
    }
        }
    }
    return 0;
}
