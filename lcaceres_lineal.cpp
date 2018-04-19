#include  <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int  main()
{
  double *upast;
  double *unew;
  double c=1.0;
  double dx=0.1,dt=0.1;
  double x_max=2.0;
  double y=0.3;
  int nx=x_max/dx +1;
  int ny=y/dt +1;

  int i;
  int j;

  upast= new double[nx];
  unew= new double[nx];

  double  x=0;
  for (i=0; i < nx; i++)
   {
      x=i*dx;

      if(x>0.75 && x<=1.25)
      {
        upast[i]=1.0;
      }
      else{

        upast[i]=0;
    }
  }
  for (j=1;j < ny;j++){
        unew[0]=0;

        unew[nx-1]=0;
        for(i=1;i<nx-1;i++)
        {
            unew[i]=upast[i]-c*dt*(upast[i]-upast[i-1])/dx;
        }
        for (i=0;i<nx;i++){
            upast[i]=unew[i];
        }
   }

  x=0;
  for (i=0;i<nx;i++){
          x=i*dx;
          cout <<x<< "  "<< unew[i] <<endl;
      }

  return 0;
}
