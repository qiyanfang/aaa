#include<stdio.h>

typedef struct people
{
  char name;//姓名,取名字的首字母
  int ranking;//排名1,2,3,4
  int color;//自行车的颜色，红1，紫2，蓝3，绿4
}people;

int main()
{
    double x,y;
	people p[4];
	int i=0,u=0,c=0;//对数组遍历用的变量
	int j=1,k=1,m=1,n=1;//排名从1开始,排名遍历用的变量
	int r=1,s=1,t=1,w=1;//颜色从1开始,颜色遍历用的变量
	int Fatma_rank=0;//Fatma的排名
	int blue_rank=0,green_rank=0,purple_rank=0;//骑蓝色车的排名，骑绿色车的排名，骑紫色车的排名
	for(;i<4;i++)//对数组进行初始化
    {
		p[i].ranking=0;//初始化为0，表示还未赋值
		p[i].color=0;//初始化为0
	}
	p[0].name='M';//Mike
	p[1].name='E';//Ellie
	p[2].name='R';//Rohan
	p[3].name='F';//Fatma
	//利用多层for循环和多个if语句，实现排列组合	
    //整体思路，先开始遍历组合，当发现某一组合满足条件时，输出第二名的名字，否则这样的组合不存在。

   
	for(j=1;j<5;j++)//排名的排列组合
	{
		p[0].ranking=j;
		for(k=1;k<5;k++)//for循环都是从1到4，保证排列的完整
		{
			if(k!=j)//if语句保证每个人的排名不同
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
					   	for(r=1;r<5;r++)//颜色的排列组合
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
												  
												 
												   //判断条件：1、Ellie骑紫色的车，Rohan没有骑绿色的车。2、Mike和Ellie不是第一，也不是最后。
                                                   
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
															 
															 //判断条件：1、骑蓝色车的人领先Fatma。2、骑绿色车的人领先骑紫色车的人
															 if(blue_rank<Fatma_rank)
																  
																 if(green_rank<purple_rank)
																 {
																		 for(c=0;c<4;c++)
																		 {
																		
																		    if(p[c].ranking==2)//找到第二名，输出他的名字
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

    printf("该组合不存在");
	return 0;

}