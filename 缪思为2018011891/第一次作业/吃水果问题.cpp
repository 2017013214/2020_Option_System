semaphore S=l;
semaphore empty=N, apple=0, orange=0;
void Father()
{
	while(1)
	{
		P(empty);
		P(S);
		��ˮ����������;
		V(S);
		if (�Ž�ȥ��������)
		{
			V(orange);
			��һ������; 
		} 
		else
		{
			V(apple)
			��һ��ƻ��; 
		}
		
	} 
}
void Son()
{
	while(1)
	{
		P(apple);
		P(S);
		��һ��ƻ��;
		V(S);
		V(empty);
		��һ��ƻ��; 
	}
}
void Daughter()
{
	while(1)
	{
		P(orange);
		P(S);
		��һ������;
		V(S);
		V(orange);
		��һ������; 
	}
}
