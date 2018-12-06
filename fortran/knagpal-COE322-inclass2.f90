       !Fortran first in-Class Lab: Takes in values a,b,c and the name.
       !Then outputs name, Volume of Sphere with radius a, and volume of
       !rectangular prism with sidelengths a,b,c.
       !Kartik Nagpal - Kn8767
       
       program F2

       implicit none

       !real(8),  parameter :: PI_8  = 4 * atan (1.0_8)
       real, parameter :: PI = 3.14159265358979323
       real :: a,b,c,volS,volC
       character(len=20) :: name

       print *, 'a = '
       read *, a


       print *, 'b = '
       read *, b


       print *, 'c = '
       read *, c


       print *, 'Name: '
       read *, name

       volS = (4/3) * PI * a**3
       volC = a * b * c
       print *, "Hello, ", name
       print *, "Sphere with radius ", a, "= ", volS
       print *, "Cube of ", a, "x", b, "x", c, "= ", volC


       end program F2
