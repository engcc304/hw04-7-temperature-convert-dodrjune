/*
    จงเขียนโปรแกรมเพื่อแปลงอุณหภูมิ โดยรับมาจากผู้ใช้เป็นองศาเซลเซียส และแปลงเป็นฟาเรนไฮต์
    
    Test case:
        User input :
            22
    Output:
        22 degree Celsius = 71.6 degree Fahrenheit

    Test case:
        User input :
            36
    Output:
        36 degree Celsius = 96.8 degree Fahrenheit
*/
#include <stdio.h>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    double celsius;

    printf ( " User input :\n " ) ;
    scanf( "%lf" , &celsius ) ;

    double fahrenheit = celsiusToFahrenheit (celsius) ;

    printf( "%.1lf degree Celsius = %.1lf degree Fahrenheit\n", celsius, fahrenheit ) ;

    return 0;
}//end function

