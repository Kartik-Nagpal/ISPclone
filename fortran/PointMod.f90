       !In-class Challenge 6: Create a Point Module, with coordinates x
       !and y, and a builtin function to find the distance between any
       !two points.
       !kn8767 - Kartik Nagpal

       module PointMod
           implicit none

           type Point
               real :: x,y
           end type Point

           contains
               real function distance(p, q)
                   type(Point) :: p, q
                   real :: r
                   r = ((p%x - q%x)**2 + (p%y - q%y)**2)
                   distance = sqrt(r)
               end function distance
       end module PointMod


       program main
           use PointMod

           type(Point) :: p, q
           p%x = 0
           p%y = 0

           q%x = 3
           q%y = 4

           print *, distance(p,q)

       end program main

