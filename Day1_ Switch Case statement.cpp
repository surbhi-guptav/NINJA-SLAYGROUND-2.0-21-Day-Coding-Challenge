#include <math.h>
double circlearea(double r){
		return M_PI*r*r;
	}
double  rectanglearea(double x, double y){
        return x*y;
	}

double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here

        switch (ch) {
        case 1:
           circlearea(a[0]);
		   break;
        case 2:
           rectanglearea(a[0], a[1]);
		   break;
        default:
          return 0;
        }
}
