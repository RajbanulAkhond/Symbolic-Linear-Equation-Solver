#include "matrix.h"
#include "sorter.h"

int main()
{
    int a,b,c,o,x,y,z,i,j,m,d,gr;
    float r,p,isFloat[2];
    char buffer[50],res[5];;
    int cab[2][2],adm[3][3];
    float tad[3][3];
    float data2[3][1],result[3][1];

    printf("**************************************************************************************************\n\n");
    printf("                                EQ Solver\n\n");
    printf("********************************************************************************\n\n\n");
    d=read_char(50,buffer);
    gr=counter(d,buffer);
    unknown(d,buffer,res);
    sorter(d,gr,buffer);
    int tab[gr][gr],data1[gr][1];
    donate_m(gr,gr,tab);printf("%d",tab[0][0]);
    donate_n(gr,1,data1);
    if(gr==3)
    {
    adj(tab);
    donate_n(3,3,adm);
    for(a=0,b=0;b<=3;b++)
    {
        prop_arg_p(3,3,a,b,tab);
        donate_n(2,2,cab);
        c=divi(cab);
        o=c*tab[a][b];
        if(b==0){x=o;}
        else if(b==1){y=o;}
        else if(b==2){z=o;}
        emp_arg(2,2,cab);
        emp();
        if(b==2){break;}
    }
    m=(x-y+z);
    if(m==0)
    {
     printf("\n\n");
     printf("There is no Solve or input is invalid.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
     printf("\007\007\007");
     printf("****************************** AK Calculation **********************************\n\n\n");
    }
    else
    {
    r=1.00000/m;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            p=r*adm[i][j];
            tad[i][j]=p;
        }
    }
    make_darg(3,1,data1);
    donate_dm(3,1,data2);
    dvec_mul(3,3,3,1,tad,data2);
    donate_dn(3,1,result);
    printf("\n\n");
    printf("The solve is:\n");
    showResult3D(res,result);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("****************************** AK Calculation **********************************\n\n\n");
    }
    }
    else
    {
        float dt1[2][2],dt2[2][1],dx[2][2],dy[2][2];
        make_darg(gr,gr,tab);
        donate_dm(gr,gr,dt1);
        make_darg(gr,1,data1);
        donate_dm(gr,1,dt2);
        donate_darg(2,2,dx,dt1);
        dx[0][0]=dt2[0][0];dx[1][0]=dt2[1][0];
        donate_darg(2,2,dy,dt1);
        dy[0][1]=dt2[0][0];dy[1][1]=dt2[1][0];
        float log=div_d(dt1);
        printf("\n\n");
        if(log==0.00000)
        {

            printf("\n");
            printf("There is no Solve or input is invalid.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("\007\007\007");
            printf("****************************** AK Calculation **********************************\n\n\n");

        }
        else
        {
            printf("\n");
            printf("The solve is:\n");
            isFloat[0]=div_d(dx)/log;
            isFloat[1]=div_d(dy)/log;
            showResult2D(res,isFloat);

            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("****************************** AK Calculation **********************************\n\n\n");
        }


    }
    getch();

}
