#include<stdio.h>

typedef struct people
{
  char name;//����,ȡ���ֵ�����ĸ
  int ranking;//����1,2,3,4
  int color;//���г�����ɫ����1����2����3����4
}people;

int main()
{
    double x,y;
	people p[4];
	int i=0,u=0,c=0;//����������õı���
	int j=1,k=1,m=1,n=1;//������1��ʼ,���������õı���
	int r=1,s=1,t=1,w=1;//��ɫ��1��ʼ,��ɫ�����õı���
	int Fatma_rank=0;//Fatma������
	int blue_rank=0,green_rank=0,purple_rank=0;//����ɫ��������������ɫ��������������ɫ��������
	for(;i<4;i++)//��������г�ʼ��
    {
		p[i].ranking=0;//��ʼ��Ϊ0����ʾ��δ��ֵ
		p[i].color=0;//��ʼ��Ϊ0
	}
	p[0].name='M';//Mike
	p[1].name='E';//Ellie
	p[2].name='R';//Rohan
	p[3].name='F';//Fatma
	//���ö��forѭ���Ͷ��if��䣬ʵ���������	
    //����˼·���ȿ�ʼ������ϣ�������ĳһ�����������ʱ������ڶ��������֣�������������ϲ����ڡ�

   
	for(j=1;j<5;j++)//�������������
	{
		p[0].ranking=j;
		for(k=1;k<5;k++)//forѭ�����Ǵ�1��4����֤���е�����
		{
			if(k!=j)//if��䱣֤ÿ���˵�������ͬ
			{
			
			  p[1].ranking=k;
			  for(m=1;m<5;m++)
			  {
			     if(m!=j&&m!=k)
				 {
			       p[2].ranking=m;
				   for(n=1;n<5;n++)
					{
			         if(n!=j&&n!=k&&n!=m)	
					 {
			           p[3].ranking=n;
					   	for(r=1;r<5;r++)//��ɫ���������
								{

									p[0].color=r;
									for(s=1;s<5;s++)
									{
										if(s!=r)
										{
										  p[1].color=s;


										  for(t=1;t<5;t++)
										  {
											 if(t!=r&&t!=s)
											 {
											   p[2].color=t;
											   
												for(w=1;w<5;w++)
												{
												 if(w!=r&&w!=s&&w!=t)
												 {
												   p[3].color=w;
												  
												 
												   //�ж�������1��Ellie����ɫ�ĳ���Rohanû������ɫ�ĳ���2��Mike��Ellie���ǵ�һ��Ҳ�������
                                                   
												   if(p[1].color==2&&p[2].color!=4)
												   {
													   
												   if(p[1].ranking!=1&&p[1].ranking!=4)
												   {
													   
													   if(p[0].ranking!=1&&p[0].ranking!=4)
													   {
															 Fatma_rank=p[3].ranking;
															
															 for(u=0;u<4;u++)
															 {
															 if(p[u].color==3)blue_rank=p[u].ranking;
															 if(p[u].color==4)green_rank=p[u].ranking;
															 if(p[u].color==2)purple_rank=p[u].ranking;
										
															 }
															 
															 //�ж�������1������ɫ����������Fatma��2������ɫ��������������ɫ������
															 if(blue_rank<Fatma_rank)
																  
																 if(green_rank<purple_rank)
																 {
																		 for(c=0;c<4;c++)
																		 {
																		
																		    if(p[c].ranking==2)//�ҵ��ڶ����������������
																			  { printf("%c",p[c].name);
																				return 0;
																			}
																		 }
																 }
													   }
												   } 
												   }
												 }
												}
											 }
										  }
										}
									}
								}
					 }
					}
				 }
			  }
			}
		}
	}

    printf("����ϲ�����");
	return 0;

}