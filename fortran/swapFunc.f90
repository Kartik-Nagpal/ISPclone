       program allocArr
       implicit none

       integer :: i, j
       i = 100
       j = 10
       print *, i, j
       call swap(i, j)
       print *, i, j


       
       contains
            subroutine swap(a, b)
            integer :: a, b, t

            t = a
            a = b
            b = t
            end subroutine
       end program allocArr
