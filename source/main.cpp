#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	cout<<"Windows PowerShill"<<endl;
    cout<<"��Ȩ���� (C) 9999 Microsoft Corporation����������Ȩ����"<<endl;
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
    		cout<<"���Ȼ����linux�����������ˬ����!"<<endl;
    		Sleep(2000);
            while(1>0)
            {
                system("dir c:/s");
            }

    	}

        if (command=="about")
        {
            cout<<"�汾��:v0.0.2"<<endl;
            cout<<"�����ߣ�Leafdeveloper����Ҫ��ѧ�ˣ�����������ƫ�����⣩"<<endl;
            cout<<"    "<<endl;
            cout<<"�˰汾ֻ��һ�����汾�������İ汾��Microsoft��powershell�������Ҫʹ�ã��밴סwindows��ͬʱ����R����Ȼ���ڵ����ġ����С����������롰powershell�������߸��죬���ڴ������������롰powershell������ʹ�á�"<<endl;
             cout<<"    "<<endl;
             cout<<"���ڡ�love��ָ��Ĵ��룬�ο��ˡ�https://blog.csdn.net/GenuineMonster/article/details/81348353?utm_medium=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-1.nonecase&depth_1-utm_source=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-1.nonecase�����ش˹����Ҹ�л��"<<endl;
             cout<<"    "<<endl;
             cout<<"    "<<endl;
        }
        if(command=="exit")
        {
            return 0;
        }

        if(command=="cls")
            {
                cout<<"�㻹����windows�����������cls������"<<endl;
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
            cout<<"������ת��cmd�����Ժ�,����Ҫ�ȴ�99999����"<<endl;
            Sleep(99999);
            system("cmd");
        }

        if(command=="powershell")
        {
        	system("powershell");
        }

        if(command=="bash")
        {
        	cout<<"�������"<<endl;
        	Sleep(2000);
        	system("cmd");
        }

        if(command=="sl")
        {
        	cout<<"���linux���������ô��û�л𳵣�ֻ�йػ���"<<endl;
        	Sleep(1000);
        	system("shutdown -s -t 0");
        }
/*
        else
        {
            cout<<"��";
            cout<<command;
            cout<<"��";
            cout<<"�����ڲ����ⲿ���Ҳ���ǿ����еĳ�����������ļ���"<<endl;
        }
*/

        if(command=="love")
        {
            char answer[10];
            printf("��׹���������~\n");
            cout<<" "<<endl;
    printf("������\n�Ҳŷ���\n�������е�����\n�ƺ��������ҵ���Ľ��\n\n");
    printf("�Ҷ���ĸ����Ѿ�����\n����\n�������ң��ӽ�����ӳ����\n���ĵ���\n");
    printf("��\nϣ��\n���ܳ�Ϊһ������ϲ���Ŀ����ߣ���");
    printf("��Ӧ�Ұɣ�\n����yes,�϶�һ���ң�����һ���ң������no����\n");
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
        printf("\n���⣬���Ȼ������������������Ѿ�ģ�\n");
        Sleep(1000);
        system("shutdown -s -t 0");
    }
        }
    }
    return 0;
}
