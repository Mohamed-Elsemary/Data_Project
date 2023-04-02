#include "process.h"

process::process(int id, int at, int ct, int n)
{
	time_process = 0;
	setn(n);
	IO_R = new int[N];
	IO_D = new int[N];
	setid(id);
	setat(at);
}

void process::setRandD(int* R, int* D)
{
	for (int i = 0; i < N; i++)
	{
		IO_R[i] = R[i];
		IO_D[i] = D[i];
	}
}


void process::setid(int i)
{
	PID = i;
}

void process::setat(int i)
{
	AT = i;
}

void process::setct(int s)
{
	CT = s;
}

void process::setn(int n)
{
	N = n;
}





int process::getid()
{
	return PID;
}

int process::getat()
{
	return AT;
}

int process::getct()
{
	return CT;
}

int process::getn()
{
	return N;
}


process::~process()
{
	delete[]IO_R;
	delete[]IO_D;
}

