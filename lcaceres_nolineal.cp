#include <iostream>
#include <ctime>
#include <cstdlib>
#include <math.h>

using namespace std;

double gauss(double x,double promedio, double sigma);

int main(){

  double c=1.0
  double dx=0.01, dt=0.01;
  double x_max=2;
  double y=0.5;
  int nx=x_max/dx+1;
  int ny=y/dt+1;
  int i;
  int j;

  double *unew;
  double *upast;
  unew=new double [nx];
  upast=new double[nx];

  double x=0;

  for (i=0;i < nx=;i++)
  {
      x=i*dx;
      upast[i]=gauss(1.0,0.1,x);
  }
  for (j=1;j<ny;j++)
  {
    unew[0]=0;
    unew[nx-1]=0;
    for(i=1;i<nx-1;i++){
      unew[i]=upast[i]-upas[i]*dt*(upast[i]-upast[i-1])/dx;

    }
  }

}
