#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	char ch[100];
	i=0;
	int ks=0,kd=0,kh=0,kc=0,qs=0,qd=0,qh=0,qc=0,\
		as=0,ah=0,ad=0,ac=0,js=0,jd=0,jh=0,jc=0;
		int point = 0,add=0,sub=0,stop=0;
		int S=0,D=0,C=0,H=0;
	while(scanf("%c",&ch[i])!=EOF)
	{
		if(ch[i-1]=='K')	
		{
			if(ch[i]=='S')	ks++;
			else if(ch[i]=='D')	kd++;
			else if(ch[i]=='H')	kh++;
			else if(ch[i]=='C')	kc++;
			point+=3;
		}
		else if(ch[i-1]=='Q')
		{
			if(ch[i]=='S')	qs++;
			else if(ch[i]=='D')	qd++;
			else if(ch[i]=='H')	qh++;
			else if(ch[i]=='C')	qc++;
				point+=2;
			}
		else if(ch[i-1]=='A')
		{
			if(ch[i]=='S')	as++;
			else if(ch[i]=='D')	ad++;
			else if(ch[i]=='H')	ah++;
			else if(ch[i]=='C')	ac++;
				point+=4;
			}
		else if(ch[i-1]=='J')
		{
			if(ch[i]=='S')	js++;
			else if(ch[i]=='D')	jd++;
			else if(ch[i]=='H')	jh++;
			else if(ch[i]=='C')	jc++;
			point+=1;
		}
		
		if(ch[i]=='S')	S++;
		if(ch[i]=='D')	D++;
		if(ch[i]=='H')	H++;
		if(ch[i]=='C')	C++;
		if(i==38){			///total character
			///add one point if exactly two cards
				if(S==2 ) add+=1;
				if( D==2 ) add+=1;
				if( H==2 ) add+=1;
				if(C==2) add+=1;
				/// add two points if has one or no cards
				if(S==1 || S==0) add+=2;
				if(D==1 || D==0) add+=2;
				if(H==1 || H==0) add+=2;
				if(C==1 || C==0) add+=2;
				///subtract one point if the follwing condition satiesfied
				if(kd==1 && D==1){sub++;} if(qd==1 && D<=2){sub++;} if(jd==1 && D<=3){sub++;}
				if(kh==1 && H==1){sub++;} if(qh==1 && H<=2){sub++;} if(jh==1 && H<=3){sub++;}
				if(kc==1 && C==1){sub++;} if(qc==1 && C<=2){sub++;} if(jc==1 && C<=3){sub++;}
				if(ks==1 && S==1){sub++;} if(qs==1 && S<=2){sub++;} if(js==1 && S<=3){sub++;}
				point = point - sub;
				
				if(ac==1|| (kc==1 && C>=2) || (qc==1 && C>=3))	stop++;
				if(ad==1 || (kd==1 && D>=2) || (qd==1 && D>=3))	stop++;
				if(ah==1 || (kh==1 && H>=2) || (qh==1 && H>=3))	stop++;
				if(as==1 || (ks==1 && S>=2) || (qs==1 && S>=3))	stop++;
				
				if(stop == 4 && point>=16)	printf("BID NO-TRUMP\n");
				
			
			else if(point+add>=14){
				if(max(max(S,D),max(C,H))==S)	printf("BID %c\n",'S');
				else if(max(max(S,D),max(C,H))==H)	printf("BID %c\n",'H');
				else if(max(max(S,D),max(C,H))==D)	printf("BID %c\n",'D');
				else if(max(max(S,D),max(C,H))==C)	printf("BID %c\n",'C');	
				}
				else if(point<14)	printf("PASS\n");
					
			ks=0;kd=0;kh=0;kc=0;qs=0;qd=0;qh=0;qc=0;as=0;ah=0;ad=0;ac=0;js=0;jd=0;jh=0;jc=0;
		 point = 0;add=0;sub=0;stop=0;
		S=0;D=0;C=0;H=0;	i=-1;
			}
			i++;
		}
}
