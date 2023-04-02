#pragma once

class process
{
private:
	int PID, AT, CT, N, *IO_R, *IO_D,time_process;
public:

	process(int,int,int,int);
	void setid(int);
	void setat(int);
	void setct(int);
	void setn(int);
	void setRandD(int *,int *);
	
	~process();
	

	int getid();
	int getat();
	int getct();
	int getn();
	

};

