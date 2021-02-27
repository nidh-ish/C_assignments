/*Input: Co-ordinates of centre point of two circles and their respective radius.
  Output: Print "Invalid input" if the radius of any of the circle is negative, print "YES" if two circles are intersecting or else "NO" for all other cases.
  Remarks: The radius of circle cannot be negative.  */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
	
	int x1, y1, x2, y2, r1, r2;                                     //declaration of coordinates and radius of two circles
        float d;                                                        //declaration of variable for distance between centre of two circles
        
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &r1, &r2); 
	d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));        //distance between the centres
	
	if(r1 < 0 || r2 < 0)                                            //condition if any of the radius is negative
        {
		 printf("Invalid input");
	 	 return 0;
 	}

	if((d == abs(r1 - r2)) || (d == (r1 + r2)) || ((d > abs(r1 - r2)) && (d < (r1 + r2)))) //cases of intersecting circles
	{
		 printf("YES");
        }
	
	else
	{
		 printf("NO"); //all other cases when the circles are either apart or one inside another
	}
  	
	return 0;
}
