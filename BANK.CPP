#include<stdio.h>
struct root
{char str ;
int info;struct root *l,*r,*next;
};void print(struct root*ro)
{



     /* first recur on left child */
     print(ro->l);

     /* then print the data of node */
     printf("%d ",ro->info);

     /* now recur on right child */
     print(ro->r);
}
void printssss(struct root *roo,char ch,int top)
{  int i=0;     int a[100];
    if(roo!=NULL)
    {  if(roo->str!=ch)
   {for(i=1;i<=top;i++)
   printf("%d",a[i]);return;}

   if(roo->l)
   {a[top]=0;
   printssss(roo->l,top+1);
   }
   if(roo->r)
   {a[top]=1;
   printssss(roo->r,top+1); }


     }

     }
     void decode(struct root *t)
     {int i=0,k=0;char bs[111],de[100];struct root*w; w=t;
     printf("enter the string of binary numbers");
     scanf("%d",bs);
     while(bs[i]!='\0')
     {
     if(bs[i]=='0')
     w=w->l;
     else w=w->r;
     if(w->str!='*')
     { de[k]=w->str;k++;
	   w=t;}
     }printf("%s",de); }
int main()
{
   char str[1111],m[111],a,b,st[1111];
   int c = 0,x,i,n,k,v,temp,count[99],freq[111],space=0,j=0;struct root *f,*r,*l, *p=NULL,*t3,*q,*s,*t1,*t2,*ro;

   printf("Enter a string only small letters\n");

   scanf("%s",str); i=0;
  while(str[i]!='\0')
  {st[i]=str[i];i++;}
  
   while (str[c] != '\0')
   {
	      /** Considering characters from 'a' to 'z' only
	  and ignoring others */

      if (str[c] >= 'a' && str[c] <= 'z')
	 count[str[c]-'a']++;
else if(str[c]==' ')
space++;
	  printf("%d",count[str[c]-'a']);
      c++;
   }
	 j=0;
   for (x= 0; x < 26; x++)
   {
	    if (count[x] != 0)
	 {a=x+'a';v=count[x];freq[j]=v;m[j]=a; printf("%c   %d",m[j],freq[j]);j++;
}
   }
   if(space>0)
   {m[j]=' ';
   freq[j]=space;}
for(i=0;i<j;i++)
   {for(k=i+1;k<j;k++)
   {if(freq[i]>freq[k]){n=freq[i];freq[i]=freq[k];
   freq[k]=n;
   temp=m[i];
   m[i]=m[k];
   m[k]=temp;
   }}}
for(i=0;i<=j;i++)
printf("%d",freq[i]);
i=0;
while(m[i]!='\0')
{q=(struct root*)malloc(sizeof(struct root));
q->r=NULL;q->l=NULL;  q->info=freq[i]; q->str=m[i];
if(p==NULL)
{p=q;l=q;
}  else{l->next=q;l=q;}

i++;
}s=p;
while(s!=NULL)
{printf("%d  %c",s->info ,s->str);s=s->next;}
    s=p;
for(i=0;i<j-1;i++)
{ ro=(struct root*)malloc(sizeof(struct root));t1=s;t2=s->next;t3=s->next->next;
     ro->str='*';
  ro->info=t1->info+t2->info;
  
ro->r=t2;
ro->l=t1;

if(ro->info<=t3->info)
{s=ro;
ro->next=t3;
}
else
{s=t3;while(t3->info!=NULL &&t3->info<ro->info)
{f=t3;t3=t3->next;
 }ro->next=t3;

f->next=ro;}}i=0;print(ro);printssss(ro,'a',0); decode(ro);
//while(st[i]!=0)
//{printssss(ro,'st[i]',0);}

return 0;}


