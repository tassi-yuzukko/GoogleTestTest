// GoogleTestTest.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"

int func(int);

int _tmain(int argc, _TCHAR* argv[])
{
	fprintf(stdout, "%d", func(1));

	return 0;
}

int func(int x){
	return x*x;
}
