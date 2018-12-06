       !Fortran fifth in-Class Lab: Prints out all the sum of squares
       !(u^2 + v^2 = w^2) in the range 1-100, w/o duplicates
       !Kartik Nagpal - Kn8767
       
       program SumSquares

       implicit none

       integer :: u, v
       real(4) :: d


       do u = 1, 100
           do v = 1, 100
                d = sqrt(Real(u**2 + v**2))
                if(d == int(d) .and. u < v .and. d < 100) then
                    print *, u, "^2 + ", v, "^2 = ", d, "^2"
                end if
           end do
       end do

       end program sumSquares
