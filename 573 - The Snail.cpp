#include<bits/stdc++.h>
using namespace std;
int main()
{
	double H,U,D,F,cur_h;
	int day;
	bool result;
	while(cin>>H>>U>>D>>F)
	{
		if(H==0)	break;
		F = U*F/100.0;
		cur_h = 0.0;
		day=0;
		
		while(true)
		{
			day++;
			
			cur_h = cur_h + U;
				if(cur_h>H)
				{
					result = true ;
					break;
				}
				cur_h = cur_h - D;
			 if(cur_h<0)
			{
				result = false;
					break;
				}
				
				U = U - F;
			if(U<0)	U = 0;
			
		}
		if(result==true)
		printf("success on day %d\n",day);
		else if(result == false)
		printf("failure on day %d\n",day);
		
			
		}
	}
