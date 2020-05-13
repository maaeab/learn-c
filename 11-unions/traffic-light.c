/* author: moemen.ahmed@gmail.com
 * date: 11 May 20
 * purpose: explore the unions in C language
 */

#include <stdio.h>
#include <string.h>

// define the traffic light as the seconds remaining in one of the three colors
union trafficLight {
    int green;
    int red;
    int yellow;
    char status[15]; 
} tf1;


int main( int argc, char** argv[] ) {
    tf1.green = 50;
    printf("Green: %d\n", tf1.green);
    
    strcpy(tf1.status, "Out of Service");
    printf("Status: %s\n", tf1.status);
    // notice that .green value has bcome corrupted after setting status
    printf("Green: %d\n", tf1.green);

    return 0;
}

    
