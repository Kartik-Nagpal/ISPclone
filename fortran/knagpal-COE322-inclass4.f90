       !Fortran fourth in-Class Lab: Takes in 2 values 'a', 'b' and then
       !check if the 'b'  value is divisible by 'a', print out to the
       !screen accordingly
       !Kartik Nagpal - Kn8767
       
       program divisor

       implicit none

       integer :: a, b, d

       print *, 'Divisor = '
       read *, a

       print *, 'Dividend = '
       read *, b

       if(mod(b,a) == 0) then
           print *, a, " is a divisor of ", b
       else 
           print *, a, " is not a divisor of ", b
       end if

       end program divisor
