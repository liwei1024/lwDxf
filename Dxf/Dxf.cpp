// Dxf.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#define TEST_ADDR 0x0000a000

int main()
{
	printf("%d\n",pApi.readInteger(TEST_ADDR));
	system("pause");
    return 0; 
}

