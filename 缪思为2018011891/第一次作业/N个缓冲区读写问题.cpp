semaphore S=1;
semaphore empty=n,full=0;
doc a[n];
int in,out;
in=out=0;
void write()
{
	while(1)
	{
		P(empty);
		P(S);
		дһ��doc��i;
		a[in]=i;
		in=(in+1)%n;
		V(S);
		v(full); 
	}
}

void read()
{
	P(full)
	P(S);
	i=a[out];
	��i;
	out=(out+1)%n;
	V(S);
	V(empty); 
}
