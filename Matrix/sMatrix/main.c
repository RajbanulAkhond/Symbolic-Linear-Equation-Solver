// Static library for matrix functionality.

//It is a logical unit for "Eq_Solver29.2"

#include <stdio.h>
#include"main.h"

/*Global variablies*/
int a,b,row,coloum,rowp,coloump;
int gcounter=0;float result;
float result_a[10];
int nmatrix[10][10];float dnmatrix[10][10];
int matrix[10][10];float dmatrix[10][10];
/*  */

/*matrix IO */
/*Read funtion*/
//*#1 int matrix*//
//*#2 float matrix*//

/*for int*/
void read_matrix()
{
    int i=0,j;

    printf("Enter row: ");
    scanf("%d",&row);
    printf("\n");
    printf("Enter coloum: ");
    scanf("%d",&coloum);
    printf("\n");

    printf("Enter row point: ");
    scanf("%d",&rowp);
    printf("\n");
    printf("Enter coloum point: ");
    scanf("%d",&coloump);
    printf("\n");

    printf("Enter the matrix: ");
    for(i;i<row;++i)
     {
         j=0;

        for(j;j<coloum;++j)
        {
            scanf("%d",&matrix[i][j]);
        }

     }
}
/*for float*/
void read_dmatrix()
{
    int i=0,j;

    printf("Enter row: ");
    scanf("%d",&row);
    printf("\n");
    printf("Enter coloum: ");
    scanf("%d",&coloum);
    printf("\n");

    printf("Enter row point: ");
    scanf("%d",&rowp);
    printf("\n");
    printf("Enter coloum point: ");
    scanf("%d",&coloump);
    printf("\n");

    printf("Enter the matrix: ");
    for(i;i<row;++i)
     {
         j=0;

        for(j;j<coloum;++j)
        {
            scanf("%f",&dmatrix[i][j]);
        }

     }
}

/*Display funtion*/
//*same*//

/*for int*/
void display_matrix(row2,coloum2,aray)
int row2,coloum2;
int aray[row2][coloum2];

{
    int i,j;

  for(i=0;i<row2;i++)
    {
        for(j=0;j<coloum2;j++)
       {

          printf("%5d",aray[i][j]);

       }
          printf("\n");

    }

}
/*for float*/
void display_dmatrix(row2,coloum2,aray)
int row2,coloum2;
float aray[row2][coloum2];

{
    int i,j;

    for(i=0;i<row2;i++)
    {
        for(j=0;j<coloum2;j++)
       {

            printf("  %5f",aray[i][j]);

       }

            printf("\n");

    }

}
/* */
/*change matrix*/
/*Transpose funtion*/
void tran()

{

    for(a=0;a<coloum;a++)
    {
        for(b=0;b<row;b++)

            nmatrix[a][b]=matrix[b][a];

    }

}
/*takes argument*/
void tran_arg(row1,coloum1,arg)
int row1,coloum1,arg[row1][coloum1];

{
    int i,j;

    for(i=0;i<row1;i++)
    {
        for(j=0;j<coloum1;j++)

            nmatrix[i][j]=arg[j][i];

    }

}

/*matrix part takers*/
void prop()
{
    int c,d,g=-1,h=0,flag;

    for(c=0;c<row;c++)
    {
        flag=1;

        for(d=0;d<coloum;d++)
        {
            if(flag!=1&&flag==0)
            {
                flag=2;
            }
          if(c!=rowp&&d!=coloump)
            {
               if(flag==1)
               {
                   g=g+1;
                   h=0;
               }
               else
               {
                   h=h+1;
               }
               nmatrix[g][h]=matrix[c][d];

               flag=0;

            }

        }
    }

}
/*takes argument*/
void prop_arg(row,coloum,arg)
int row,coloum,arg[row][coloum];
{
    int c,d,g=-1,h=0,flag;

    for(c=0;c<row;c++)
    {
        flag=1;

        for(d=0;d<coloum;d++)
        {
            if(flag!=1&&flag==0)
            {
                flag=2;
            }
          if(c!=rowp&&d!=coloump)
            {
               if(flag==1)
               {
                   g=g+1;
                   h=0;
               }
               else
               {
                   h=h+1;
               }
               nmatrix[g][h]=arg[c][d];

               flag=0;

            }

        }
    }

}
/*arg+point*/
void prop_arg_p(row,coloum,row_p,coloum_p,arg)
int row,coloum,row_p,coloum_p,arg[row][coloum];
{
    int c,d,g=-1,h=0,flag;

    for(c=0;c<row;c++)
    {
        flag=1;

        for(d=0;d<coloum;d++)
        {
            if(flag!=1&&flag==0)
            {
                flag=2;
            }
          if(c!=row_p&&d!=coloum_p)
            {
               if(flag==1)
               {
                   g=g+1;
                   h=0;
               }
               else
               {
                   h=h+1;
               }
               nmatrix[g][h]=arg[c][d];

               flag=0;

            }

        }
    }

}
void dprop_arg(row,coloum,row_p,coloum_p,arg)
int row,coloum,row_p,coloum_p;
float arg[row][coloum];
{
    int c,d,g=-1,h=0,flag;

    for(c=0;c<row;c++)
    {
        flag=1;

        for(d=0;d<coloum;d++)
        {
            if(flag!=1&&flag==0)
            {
                flag=2;
            }
          if(c!=row_p&&d!=coloum_p)
            {
               if(flag==1)
               {
                   g=g+1;
                   h=0;
               }
               else
               {
                   h=h+1;
               }
               dnmatrix[g][h]=arg[c][d];

               flag=0;

            }

        }
    }

}

/*donaters*/
/*same*/
/*int*/ /*nmatrix*/
void donate_n(row3,coloum3,aray1)
int row3,coloum3,aray1[row3][coloum3];
{
    int i,j;

    for(i=0;i<row3;i++)
    {
        for(j=0;j<coloum3;j++)

            aray1[i][j]=nmatrix[i][j];

    }
}
/*matrix*/
void donate_m(row3,coloum3,aray1)
int row3,coloum3,aray1[row3][coloum3];
{
    int i,j;

    for(i=0;i<row3;i++)
    {
        for(j=0;j<coloum3;j++)

            aray1[i][j]=matrix[i][j];

    }
}
/*float*/ /*d_nmatrix*/
void donate_dn(row3,coloum3,aray1)
int row3,coloum3;
float aray1[row3][coloum3];
{
    int i,j;

    for(i=0;i<row3;i++)
    {
        for(j=0;j<coloum3;j++)

            aray1[i][j]=dnmatrix[i][j];

    }
}
/*d_matrix*/
void donate_dm(row3,coloum3,aray1)
int row3,coloum3;
float aray1[row3][coloum3];
{
    int i,j;

    for(i=0;i<row3;i++)
    {
        for(j=0;j<coloum3;j++)

            aray1[i][j]=dmatrix[i][j];

    }
}
/*user difined aray*/
/*int*/
void donate_arg(row3,coloum3,aray1,aray3)
int row3,coloum3,aray1[row3][coloum3],aray3[row3][coloum3];
{
    int i,j;

    for(i=0;i<row3;i++)
    {
        for(j=0;j<coloum3;j++)

            aray1[i][j]=aray3[i][j];

    }
}
/*float*/
void donate_darg(row3,coloum3,aray1,aray3)
int row3,coloum3;
float aray1[row3][coloum3],aray3[row3][coloum3];
{
    int i,j;

    for(i=0;i<row3;i++)
    {
        for(j=0;j<coloum3;j++)

            aray1[i][j]=aray3[i][j];

    }
}
void exchange()
{
    int i,j;

    for(i=0;i<row;i++)
    {
        for(j=0;j<coloum;j++)

            nmatrix[i][j]=matrix[i][j];

    }
}
void exchange_d()
{
    int i,j;

    for(i=0;i<row;i++)
    {
        for(j=0;j<coloum;j++)

            dnmatrix[i][j]=dmatrix[i][j];

    }
}
/*div function*/
/*int*/
int divi(aray2)
int aray2[2][2];
{
    int j;

    j=aray2[0][0]*aray2[1][1]-aray2[0][1]*aray2[1][0];

    return j;

}
/*float*/
float div_d(aray2)
float aray2[2][2];
{
    float j;

    j=aray2[0][0]*aray2[1][1]-aray2[0][1]*aray2[1][0];

    return j;

}
void div_u(r,c,p)
int r,c;
float p;
{
    int k=0,i;
    float t=0;
    float utmp[r][c];
    donate_dn(r,c,utmp);
    if(r==1){
    result_a[0]= utmp[0][0];
    result_a[1]=result_a[1]+p*result_a[0];
    }
    else{
    for(k;k<r;k++)
    {
        if((k%2)==0){t=utmp[0][k];}
        else{t=-utmp[0][k];}
        emp_d();
        dprop_arg(r,c,0,k,utmp);
        div_u(r-1,c-1,t);
        if(r!=2)
        {
        result_a[r-1]=result_a[r-1]+t*result_a[r-2];
        for(i=1;i<(r-1);i++){
        result_a[i]=0;
        }
        }
    }

    }
}
void show_result_a(r)
int r;
{
    int i=0;
    for(i;i<r;i++)
    {
        printf("%lf , ",result_a[i]);
    }
}
void show_result(r)
int r;
{
    if(result_a[r-1]==0.000000){printf("The Matrix is Singular.\n");}
        printf("%lf  ",result_a[r-1]);

}
/*adjioned matrix*/
void adj(aray5)
int aray5[3][3];
{
    int i,j,d,m,n,flag,res[3][3],hot[2][2];

    for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
           m=i;n=j;
           prop_arg_p(3,3,m,n,aray5);
           donate_n(2,2,hot);
           d=m+n;
           if(d%2==0){flag=1;}
           else{flag=0;}
           if(flag==1){res[m][n]=divi(hot);}
           else if(flag==0){res[m][n]=divi(hot)*-1;}
           emp_arg(2,2,hot);
           emp();

        }

     }

           tran_arg(3,3,res);

}
/*vector multification*/
/*same*/
/*int*/
void vec_mul(row1,coloum1,row2,coloum2,aray1,aray2)
int row1,coloum1,row2,coloum2;
int aray1[row1][coloum1],aray2[row2][coloum2];
{
    int i,j,k,x=0;

    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
         for(k=0;k<3;k++)
         {
            x=x+aray1[i][k]*aray2[k][j];

         }
         nmatrix[i][j]=x;
         x=0;
     }
    }
}
/*float*/
void dvec_mul(row1,coloum1,row2,coloum2,aray1,aray2)
int row1,coloum1,row2,coloum2;
float aray1[row1][coloum1],aray2[row2][coloum2];
{
    int i,j,k;
    float x=0.00000,p,r;

    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
         for(k=0;k<3;k++)
         {
            r=aray1[i][k];
            p=r*aray2[k][j];
            x=x+p;

         }
         dnmatrix[i][j]=x;
         x=0.00000;
     }
    }
}
/*   */

/*Extra*/
void copyr(r)
int* r;
{
    *r=row;
}
void copyc(c)
int* c;
{
    *c=coloum;
}
void copy_result(r)
float* r;
{
    *r=result;
}
void emp()
{
    int i,j;

    for(i=0;i<row;i++)
    {
        for(j=0;j<coloum;j++)

            nmatrix[i][j]=0;

    }

}
void emp_d()
{
    int i,j;

    for(i=0;i<row;i++)
    {
        for(j=0;j<coloum;j++)

            dnmatrix[i][j]=0.000000;

    }

}

void emp_arg(row4,coloum4,aray4)
int row4,coloum4,aray4[row4][coloum4];
{
    int i,j;

    for(i=0;i<row4;i++)
    {
        for(j=0;j<coloum4;j++)

            aray4[i][j]=0;

    }

}
void make_darg(row,coloum,aray)
int row,coloum,aray[row][coloum];
{
   int i,j;

    for(i=0;i<row;i++)
    {
        for(j=0;j<coloum;j++)

            dmatrix[i][j]=aray[i][j]*1.00000;

    }

}
/* */
/*END*/
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






