// Static library for sorting functionality.
//This file contains sorter for "Eq_Solver29.2"
//It controls reading,analizing and writing data for "Eq_Solver29.2"
//This is the data reader.
    int read_char(i,dat)
    int i;
    char dat[i];
    {
        int flag=1,gi;
        char t;

        printf("Enter your Eqation: \n");
        printf("\n");
        for(gi=0;flag==1;gi++)
        {
            t=getchar();
            if(t!='E'){dat[gi]=t;}
            else {return gi;}
        }

    }
//
//This is the data writer.
    void display_char(k,dat)
    int k;
    char dat[k];
    {
        int i;
        for(i=0;i<=k;i++)
            printf("%c",dat[i]);
    }
//
//This is the main sorter function.
    void sorter(a,b,s)
    int a,b;
    char s[];
    {
        int i,n=0,m=0,k=0,flag=0,flag1=0,flag2=1,flag3=0,flag4=0,j=1,h=-1,f=-1;
        for(i=0;i<a;i++)
        {

            if(i==0){
                    if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z'){n=1;}
                    else{n=s[i]-'0';flag3=1;}
                    }
                    else{flag3=0;}
            if(s[i] >= '0' && s[i] <= '9' && flag3==0)
            {
                if(k==b-1 && flag==1 && flag1==1)
                {
                   m=m+1;k=0;
                }
                else if(flag1==1){k=k+1;}

                if(k==b-1){flag=1;}
                else{flag=0;}
                n = 10 * n + (s[i] - '0');
                flag1=0,flag4=0;
            }
            else if(s[i]=='+'){j=1;flag4=1;}
            else if(s[i]=='-'){j=-1;flag4=1;}
            else if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z' || s[i]=='\n')
            {
              f=f+1;

               if(flag2==1){
                if(flag4==1){
                if(k==b-1 && flag==1 && flag1==1)
                {
                   m=m+1;k=0;
                }
                else if(flag1==1){k=k+1;}

                if(k==b-1){flag=1;}
                else{flag=0;}
                flag1=0,flag4=0;
                matrix[m][k]=j;flag1=1;n=0;j=1;
                            }
                else{
                        matrix[m][k]=n*j;flag1=1;n=0;j=1;
                    }
                           }
                else{h=h+1;nmatrix[h][0]=n*j;flag2=1;n=0;j=1;flag4=0;}

                if(s[i]=='\n'){flag4=1;}
                else{flag4=0;}

            }
            else if(s[i]=='=')
            {
                flag2=0;
            }
            else{continue;}

        }

    }
//

//This counts variables.
    int counter(k,dat)
    int k;
    char dat[k];
    {
        int i,gr=0;
        for(i=0;i<k;i++)
        if(dat[i]>='A' && dat[i]<='Z' || dat[i]>='a' && dat[i]<='z')
        {
            gr=gr+1;
        }
        else if(dat[i]=='='){return gr;}
        else{continue;}
    }
//
//These are some other essential functions.
void unknown(k,dat,des)
int k;
char dat[k],des[3];
{
    int i,j=0;
        for(i=0;i<k;i++)
        if(dat[i]>='A' && dat[i]<='Z' || dat[i]>='a' && dat[i]<='z')
        {
            des[j]=dat[i];j++;
        }
        else if(dat[i]=='='){break;}
        else{continue;}
}
 int floatChecking(pro)
 float pro;
 {

         if((pro-(int)pro)!=0){return 1;}
         else{return 0;}

 }
 void showIresult(c,rf)
 char c;
 float rf;
 {
     int isInt=rf;
     printf("              %c=%d\n",c,isInt);
 }

 void showFresult(c,rf)
 char c;
 float rf;
 {
     printf("              %c=%f\n",c,rf);
 }
 void showResult3D(res,result)
 char res[5];
 float result[3][1];
 {
     if(floatChecking(result[0][0])==1)
            {
                showFresult(res[0],result[0][0]);
            }
            else
            {
                showIresult(res[0],result[0][0]);
            }

    if(floatChecking(result[1][0])==1)
            {
                showFresult(res[1],result[1][0]);
            }
            else
            {
                showIresult(res[1],result[1][0]);
            }
    if(floatChecking(result[2][0])==1)
            {
                showFresult(res[2],result[2][0]);
            }
            else
            {
                showIresult(res[2],result[2][0]);
            }
 }
 void showResult2D(res,result)
 char res[5];
 float result[2];
 {
            if(floatChecking(result[0])==1)
            {
                showFresult(res[0],result[0]);
            }
            else
            {
                showIresult(res[0],result[0]);
            }

            if(floatChecking(result[1])==1)
            {
                showFresult(res[1],result[1]);
            }
            else
            {
                showIresult(res[1],result[1]);
            }
 }
 //
 /*END*/
