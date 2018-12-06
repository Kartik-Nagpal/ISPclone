       !HW #4: Here, using fortran, we look at all the numbers between 0
       !and 100, and checks if the number is Prime. If it's prime, the
       !program will say so, and otherwise, it will provide a divsor for
       !the non-prime number.
       !Kartik Nagpal - Kn8767
       program isPrime

       implicit none

       integer :: i, j
       logical :: p

       do i = 0, 100
           p = .TRUE.
           do j = 2, (i - 1)
               if(mod(i, j) == 0) then
                   p = .FALSE.
                   exit
               end if
           end do
           if(p) then
               print *, i," is prime"
           else
               print *, i," is not prime: it is divisble by ", j 
           end if
       end do

       end program isPrime
