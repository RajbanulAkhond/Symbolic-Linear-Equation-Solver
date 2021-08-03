#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>

/*  To use this exported function of dll, include this header
 *  in your project.
 */

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif


#ifdef __cplusplus
extern "C"
{
#endif

/*Global variablies*/
int a,b,row,coloum,rowp,coloump;
int gcounter=0;float result;
float result_a[10];
int nmatrix[10][10];float dnmatrix[10][10];
int matrix[10][10];float dmatrix[10][10];
/*  */

void DLL_EXPORT read_matrix();
void DLL_EXPORT read_dmatrix();
void DLL_EXPORT display_matrix(int row2,int coloum2,int aray[row2][coloum2]);
void DLL_EXPORT display_dmatrix(int row2,int coloum2,float aray[row2][coloum2]);
void DLL_EXPORT tran();
void DLL_EXPORT tran_arg(int row1,int coloum1,int arg[row1][coloum1]);
void DLL_EXPORT prop();
void DLL_EXPORT prop_arg(int row,int coloum,int arg[row][coloum]);
void DLL_EXPORT prop_arg_p(int row,int coloum,int row_p,int coloum_p ,int arg[row][coloum]);
void DLL_EXPORT dprop_arg(int row,int coloum,int row_p,int coloum_p,float arg[row][coloum]);
void DLL_EXPORT donate_n(int row3,int coloum3,int aray1[row3][coloum3]);
void DLL_EXPORT donate_m(int row3,int coloum3,int aray1[row3][coloum3]);
void DLL_EXPORT donate_dn(int row3,int coloum3,float aray1[row3][coloum3]);
void DLL_EXPORT donate_dm(int row3,int coloum3,float aray1[row3][coloum3]);
void DLL_EXPORT donate_arg(int row3,int coloum3,int aray1[row3][coloum3],int aray3[row3][coloum3]);
void DLL_EXPORT donate_darg(int row3,int coloum3,float aray1[row3][coloum3],float aray3[row3][coloum3]);
void DLL_EXPORT exchange();
void DLL_EXPORT exchange_d();
int DLL_EXPORT divi(int aray2[2][2]);
float DLL_EXPORT div_d(float aray2[2][2]);
void DLL_EXPORT div_u(int r,int c,float p);
void DLL_EXPORT show_result_a(int r);
void DLL_EXPORT show_result(int r);
void DLL_EXPORT adj(int aray5[3][3]);
void DLL_EXPORT vec_mul(int row1,int coloum1,int row2,int coloum2,int aray1[row1][coloum1],int aray2[row2][coloum2]);
void DLL_EXPORT dvec_mul(int row1,int coloum1,int row2,int coloum2,float aray1[row1][coloum1],float aray2[row2][coloum2]);
void DLL_EXPORT copyr(int* r);
void DLL_EXPORT copyc(int* c);
void DLL_EXPORT copy_result(float* r);
void DLL_EXPORT emp();
void DLL_EXPORT emp_d();
void DLL_EXPORT emp_arg(int row4,int coloum4,int aray4[row4][coloum4]);
void DLL_EXPORT make_darg(int row,int coloum,int aray[row][coloum]);

int DLL_EXPORT read_char(int i,char dat[i]);
void DLL_EXPORT display_char(int k,char dat[k]);
void DLL_EXPORT sorter(int a,int b,char s[]);
int DLL_EXPORT counter(int k,char dat[k]);
void DLL_EXPORT unknown(int k,char dat[k],char des[3]);
int DLL_EXPORT floatChecking(float pro);
void DLL_EXPORT showIresult(char c,float rf);
void DLL_EXPORT showFresult(char c,float rf);
void DLL_EXPORT showResult3D(char res[5],float result[3][1]);
void DLL_EXPORT showResult2D(char res[5],float result[2]);





#ifdef __cplusplus
}
#endif

#endif // __MAIN_H__
